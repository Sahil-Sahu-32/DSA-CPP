#include <bits/stdc++.h>
using namespace std;

int countEqual01(vector<int>& arr) {

    unordered_map<int, int> freq;

    // Empty prefix
    freq[0] = 1;

    int sum = 0;
    int answer = 0;

    for (int x : arr) {

        // Convert:
        // 0 -> -1
        // 1 -> +1

        if (x == 0) {
            sum--;
        }
        else {
            sum++;
        }

        // Same prefix sum means
        // equal number of 0s and 1s
        if (freq.find(sum) != freq.end()) {

            answer += freq[sum];
        }

        freq[sum]++;
    }

    return answer;
}

int main() {

    vector<int> arr = {
        0, 1, 0, 1
    };

    int result =
        countEqual01(arr);

    cout << "Number of subarrays with "
         << "equal 0s and 1s = "
         << result << endl;

    return 0;
}