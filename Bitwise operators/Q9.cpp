#include <iostream>
using namespace std;

int main()
{
    int n = 17;

    if(n & 1)
        cout << "Odd";
    else
        cout << "Even";

    return 0;
}