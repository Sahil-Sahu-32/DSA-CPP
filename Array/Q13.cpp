#include <iostream>
#include <algorithm>
using namespace std;

int trapWater(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    int leftMax = 0;
    int rightMax = 0;

    int water = 0;
 while (left < right)
    {
        if (arr[left] <= arr[right])
        {
            if (arr[left] >= leftMax)
            {
                leftMax = arr[left];
            }
            else
            {
                water += leftMax - arr[left];
            }

            left++;
        }
        else
        {
            if (arr[right] >= rightMax)
            {
                rightMax = arr[right];
            }
            else
            {
                water += rightMax - arr[right];
            }

            right--;
        }
    }

    return water;
}

int main()
{
    int arr[] = {4, 2, 0, 3, 2, 5};
    int n = 6;

    cout << "Trapped water = "
         << trapWater(arr, n);

    return 0;
}