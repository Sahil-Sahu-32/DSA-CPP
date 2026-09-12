#include <iostream>
using namespace std;

void generate(string current,
              int open,
              int close,
              int n) {

    // Complete string
    if (current.length() == 2 * n) {
        cout << current << endl;
        return;
    }

    // Add opening bracket
    if (open < n) {
        generate(current + "(",
                 open + 1,
                 close,
                 n);
    }

    // Add closing bracket
    if (close < open) {
        generate(current + ")",
                 open,
                 close + 1,
                 n);
    }
}

