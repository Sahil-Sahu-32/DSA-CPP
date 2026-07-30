#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarraySumK(vector<int>& nums, int k) {
    unordered_map<long long, int> mp;

    long long prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];

        // If subarray starts from index 0
        if (prefixSum == k)
            maxLen = i + 1;

        // If (prefixSum - k) exists
        if (mp.find(prefixSum - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefixSum - k]);
        }

        // Store only first occurrence
        if (mp.find(prefixSum) == mp.end()) {
            mp[prefixSum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;

    cout << longestSubarraySumK(nums, k);

    return 0;
}