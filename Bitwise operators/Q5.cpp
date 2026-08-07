#include <iostream>
using namespace std;

int main()
{
    long long a = 3;
    long long b = 13;
    long long ans = 1;

    while(b > 0)
    {
        if(b & 1)
            ans *= a;

        a *= a;
        b >>= 1;
    }

    cout << ans;

    return 0;
}