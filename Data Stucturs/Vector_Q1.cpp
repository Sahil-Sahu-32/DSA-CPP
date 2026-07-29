#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxNonOverlapping(vector<vector<int>>& intervals)
{
    sort(intervals.begin(), intervals.end(),
         [](const vector<int>& a, const vector<int>& b)
         {
             if (a[1] == b[1])
                 return a[0] < b[0];
             return a[1] < b[1];
         });

    int count = 0;
    int lastEnd = -1;

    for (auto &interval : intervals)
    {
        if (interval[0] >= lastEnd)
        {
            count++;
            lastEnd = interval[1];
        }
    }

    return count;
}

int main()
{
    vector<vector<int>> intervals = {
        {1,3},
        {2,4},
        {3,5},
        {7,8},
        {5,7},
        {6,9}
    };

    cout << maxNonOverlapping(intervals);

    return 0;
}