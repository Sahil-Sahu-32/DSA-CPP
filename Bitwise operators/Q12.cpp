#include <iostream>
using namespace std;

int xorTillN(int n)
{
    switch(n % 4)
    {
        case 0:
            return n;

        case 1:
            return 1;

        case 2:
            return n + 1;

        case 3:
            return 0;
    }

    return 0;
}

int main()
{
    int n = 10;

    cout << xorTillN(n);

    return 0;
}