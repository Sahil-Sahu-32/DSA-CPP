#include <iostream>
using namespace std;

int countSubarrays(int arr[], int n, int k)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == k)
                count++;
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 3, -2, 2};
    int n = 5;
    int k = 3;

    cout << countSubarrays(arr, n, k);

    return 0;
}