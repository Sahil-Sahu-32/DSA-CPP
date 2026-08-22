#include <iostream>
#include <algorithm>
using namespace std;

int maxProduct(int arr[], int n)
{
    int currentMax = arr[0];
    int currentMin = arr[0];

    int answer = arr[0];

    for (int i = 1; i < n; i++)
    {
        // If current number is negative,
        // maximum and minimum swap their roles
        if (arr[i] < 0)
        {
            swap(currentMax, currentMin);
        }

        currentMax = max(arr[i], currentMax * arr[i]);
        currentMin = min(arr[i], currentMin * arr[i]);

        answer = max(answer, currentMax);
    }

    return answer;
}

int main()
{
    int arr[] = {2, 3, -2, 4};
    int n = 4;

    cout << "Maximum product = "
         << maxProduct(arr, n);

    return 0;
}