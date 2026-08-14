#include <bits/stdc++.h>
using namespace std;

int countSubarraysXOR(vector<int>& arr, int k) {
    unordered_map<int, int> mp;

    mp[0] = 1;

    int xr = 0;
    int ans = 0;

    for (int x : arr) {
        xr ^= x;

        int required = xr ^ k;

        if (mp.find(required) != mp.end()) {
            ans += mp[required];
        }

        mp[xr]++;
    }

    return ans;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};

    cout << countSubarraysXOR(arr, 6);

    return 0;
}