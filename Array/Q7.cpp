#include <bits/stdc++.h>
using namespace std;

long long mergeAndCount(vector<int>& a, vector<int>& temp,
                        int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    long long inversions = 0;

    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];

            // All remaining left elements are greater
            inversions += (mid - i + 1);
        }
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (int x = left; x <= right; x++)
        a[x] = temp[x];

    return inversions;
}

long long mergeSort(vector<int>& a, vector<int>& temp,
                    int left, int right) {
    if (left >= right)
        return 0;

    int mid = left + (right - left) / 2;

    long long ans = 0;

    ans += mergeSort(a, temp, left, mid);
    ans += mergeSort(a, temp, mid + 1, right);
    ans += mergeAndCount(a, temp, left, mid, right);

    return ans;
}

int main() {
    vector<int> a = {5, 3, 2, 4, 1};

    vector<int> temp(a.size());

    long long result = mergeSort(a, temp, 0, a.size() - 1);

    cout << "Inversions = " << result << '\n';

    return 0;
}