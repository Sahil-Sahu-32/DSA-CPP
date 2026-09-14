#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string& s, int left, int right) {

    while (left < right) {

        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

void partition(string& s,
               int index,
               vector<string>& current) {

    // Entire string processed
    if (index == s.length()) {

        for (string part : current) {
            cout << part << " ";
        }

        cout << endl;

        return;
    }

    for (int i = index; i < s.length(); i++) {

        if (isPalindrome(s, index, i)) {

            current.push_back(s.substr(index, i - index + 1));

            partition(s, i + 1, current);

            // Backtrack
            current.pop_back();
        }
    }
}

int main() {

    string s = "aab";

    vector<string> current;

    partition(s, 0, current);

    return 0;
}