#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = 7;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}