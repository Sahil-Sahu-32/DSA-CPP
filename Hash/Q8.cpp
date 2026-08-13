#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& arr) {

    unordered_map<int, int> mp;

    mp[0] = -1;

    int sum = 0;
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == 0)
            sum--;
        else
            sum++;

        if (mp.find(sum) != mp.end()) {
            ans = max(ans, i - mp[sum]);
        }
        else {
            mp[sum] = i;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {0, 1, 0, 1, 1, 1, 0};

    cout << findMaxLength(arr);

    return 0;
}