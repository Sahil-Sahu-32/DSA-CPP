#include <iostream>
#include <unordered_map>
using namespace std;

int countSubarrays(int arr[], int n, int k)
{
    unordered_map<int, int> mp;

    int sum = 0;
    int count = 0;

    // Empty prefix
    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        // Check whether required prefix exists
        if (mp.find(sum - k) != mp.end())
        {
            count += mp[sum - k];
        }

        // Store current prefix sum
        mp[sum]++;
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 3, -2, 2};
    int n = 5;
    int k = 3;

    cout << "Number of subarrays = "
         << countSubarrays(arr, n, k);

    return 0;
}