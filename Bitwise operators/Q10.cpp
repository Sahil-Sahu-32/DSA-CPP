#include <iostream>
using namespace std;

int singleNumber(int arr[], int n)
{
    int ans = 0;

    for(int bit = 0; bit < 32; bit++)
    {
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] & (1 << bit))
                count++;
        }

        if(count % 3 != 0)
            ans |= (1 << bit);
    }

    return ans;
}

int main()
{
    int arr[] = {2, 2, 3, 2, 3, 3, 4};

    cout << singleNumber(arr, 7);

    return 0;
}
