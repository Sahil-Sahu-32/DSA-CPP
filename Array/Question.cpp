#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Q2 functions must be outside main
void reverseArr(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    if (k == 0) return;

    reverseArr(arr, 0, k - 1);
    reverseArr(arr, k, n - 1);
    reverseArr(arr, 0, n - 1);
}

int main(){

    // Q1
    int nums[] = {5,15,22,1,-15};
    int small = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < small)
        {
            small = nums[i];
        }
    }

    cout << "Smallest: " << small << endl;

    // Q2
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    leftRotate(arr, k);

    cout << "Rotated array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}