#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestZeroSumSubarray(vector<int>& arr) {

    unordered_map<long long, int> mp;

    long long prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {

        prefixSum += arr[i];

        // Case 1: subarray starts from index 0
        if (prefixSum == 0) {
            maxLength = i + 1;
        }

        // Case 2: prefix sum has appeared before
        if (mp.find(prefixSum) != mp.end()) {

            int length = i - mp[prefixSum];

            maxLength = max(maxLength, length);
        }
        else {
            // Store only first occurrence
            mp[prefixSum] = i;
        }
    }

    return maxLength;
}

int main() {

    vector<int> arr = {
        15, -2, 2, -8, 1, 7, 10, 23
    };

    cout << "Longest zero-sum subarray length: "
         << longestZeroSumSubarray(arr);

    return 0;
}