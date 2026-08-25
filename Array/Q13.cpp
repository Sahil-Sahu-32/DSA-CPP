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