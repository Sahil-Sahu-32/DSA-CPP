#include <bits/stdc++.h>
using namespace std;

int longestXOR(vector<int>& arr, int k) {
    unordered_map<int, int> mp;

    mp[0] = -1;

    int xr = 0;
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        xr ^= arr[i];

        int required = xr ^ k;

        if (mp.find(required) != mp.end()) {
            ans = max(ans, i - mp[required]);
        }

        if (mp.find(xr) == mp.end()) {
            mp[xr] = i;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9};

    cout << longestXOR(arr, 5);

    return 0;
}