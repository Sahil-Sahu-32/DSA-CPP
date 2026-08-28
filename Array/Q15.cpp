#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestConsecutive(int arr[], int n)
{
    unordered_set<int> st;

    // Store all elements
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    int longest = 0;

    

    return longest;
}

