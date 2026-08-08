#include <iostream>
using namespace std;

int main()
{
    int n = 22;
    int i = 2;

    if(n & (1 << i))
        cout << "Bit is 1";
    else
        cout << "Bit is 0";

    return 0;
}