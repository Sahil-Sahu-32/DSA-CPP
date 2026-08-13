#include <bits/stdc++.h>
using namespace std;

int longestEqual012(vector<int>& arr) {

    map<pair<int, int>, int> mp;

    mp[{0, 0}] = -1;

    int c0 = 0, c1 = 0, c2 = 0;
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else
            c2++;

        int diff1 = c0 - c1;
        int diff2 = c0 - c2;

        pair<int, int> state = {diff1, diff2};

        if (mp.find(state) != mp.end()) {
            ans = max(ans, i - mp[state]);
        }
        else {
            mp[state] = i;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {0, 1, 2, 0, 1, 2};

    cout << longestEqual012(arr);

    return 0;
}