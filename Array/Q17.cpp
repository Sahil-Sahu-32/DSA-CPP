#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& arr) {

    int currMax = arr[0];
    int currMin = arr[0];
    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i] < 0) {
            swap(currMax, currMin);
        }

        currMax = max(arr[i], currMax * arr[i]);
        currMin = min(arr[i], currMin * arr[i]);

        ans = max(ans, currMax);
    }

    return ans;
}

