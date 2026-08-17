#include <bits/stdc++.h>
using namespace std;

long long maxCrossingSum(const vector<int>& a, int l, int mid, int r) {
    long long leftSum = LLONG_MIN;
    long long sum = 0;

    for (int i = mid; i >= l; i--) {
        sum += a[i];
        leftSum = max(leftSum, sum);
    }

    long long rightSum = LLONG_MIN;
    sum = 0;

    for (int i = mid + 1; i <= r; i++) {
        sum += a[i];
        rightSum = max(rightSum, sum);
    }

    return leftSum + rightSum;
}

long long maxSubarraySum(const vector<int>& a, int l, int r) {
    if (l == r)
        return a[l];

    int mid = l + (r - l) / 2;

    long long left = maxSubarraySum(a, l, mid);
    long long right = maxSubarraySum(a, mid + 1, r);
    long long cross = maxCrossingSum(a, l, mid, r);

    return max({left, right, cross});
}

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubarraySum(a, 0, a.size() - 1) << '\n';

    return 0;
}