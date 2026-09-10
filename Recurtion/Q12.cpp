#include <iostream>
using namespace std;

void reverseString(string &s, int left, int right) {

    if (left >= right) {
        return;
    }

    swap(s[left], s[right]);

    reverseString(s, left + 1, right - 1);
}

