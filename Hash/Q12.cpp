#include <bits/stdc++.h>
using namespace std;

int longestSubstring(
    string s,
    int k) {

    unordered_map<char, int> freq;

    int left = 0;
    int maxLength = 0;

    for (int right = 0;
         right < s.length();
         right++) {

        // Add current character
        freq[s[right]]++;

        // Too many distinct characters
        while (freq.size() > k) {

            freq[s[left]]--;

            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }

            left++;
        }

        int length = right - left + 1;

        maxLength = max(maxLength, length);
    }

    return maxLength;
}

int main() {

    string s = "eceba";
    int k = 2;

    int result =
        longestSubstring(s, k);

    cout << "Longest substring length = "
         << result << endl;

    return 0;
}