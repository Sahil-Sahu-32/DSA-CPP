#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 3, 4, 5};
    int n = 5;

    int ans = n;

    for(int i = 0; i < n; i++)
        ans ^= i ^ arr[i];

    cout << ans;

    return 0;
}