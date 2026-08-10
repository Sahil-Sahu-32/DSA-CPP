#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> arr = {'A', 'B', 'C'};

    int n = arr.size();

    for(int mask = 0; mask < (1 << n); mask++)
    {
        cout << "{ ";

        for(int i = 0; i < n; i++)
        {
            if(mask & (1 << i))
            {
                cout << arr[i] << " ";
            }
        }

        cout << "}\n";
    }

    return 0;
}