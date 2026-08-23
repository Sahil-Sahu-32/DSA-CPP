#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];

    // Step 1: Find intersection point
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];

    } while (slow != fast);

    // Step 2: Find entrance of cycle
    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}