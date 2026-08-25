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
