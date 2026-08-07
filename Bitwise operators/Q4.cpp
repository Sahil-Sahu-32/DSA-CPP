#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 1;

    n = n ^ (1 << i);

    cout << n;

    return 0;
}