#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& arr) {
    unordered_set<int> st(arr.begin(), arr.end());

    int ans = 0;

    for (int x : st) {

        // Start of sequence
        if (st.find(x - 1) == st.end()) {

            int current = x;
            int length = 1;

            while (st.find(current + 1) != st.end()) {
                current++;
                length++;
            }

            ans = max(ans, length);
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};

    cout << longestConsecutive(arr);

    return 0;
}