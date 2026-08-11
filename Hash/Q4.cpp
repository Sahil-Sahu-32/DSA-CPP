#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {4, 5, 1, 2, 1, 4, 5};
    int n = 7;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    for(int i = 0; i < n; i++)
    {
        if(mp[arr[i]] == 1)
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}