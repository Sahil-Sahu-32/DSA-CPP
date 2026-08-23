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

 