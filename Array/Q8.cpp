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

    // Check every element
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];

        // Check whether num is the beginning
        if (st.find(num - 1) == st.end())
        {
            int current = num;
            int length = 1;

            // Find consecutive numbers
            while (st.find(current + 1) != st.end())
            {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}

int main()
{
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = 6;

    cout << "Longest consecutive sequence = "
         << longestConsecutive(arr, n);

    return 0;
}