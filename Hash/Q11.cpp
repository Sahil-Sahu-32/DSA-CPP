#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(
    vector<string>& words) {

    unordered_map<string, vector<string>> mp;

    for (string word : words) {

        string key = word;

        // Same sorted string = anagram
        sort(key.begin(), key.end());

        mp[key].push_back(word);
    }

    vector<vector<string>> result;

    for (auto& pair : mp) {

        result.push_back(pair.second);
    }

    return result;
}

int main() {

    vector<string> words = {
        "eat",
        "tea",
        "tan",
        "ate",
        "nat",
        "bat"
    };

    vector<vector<string>> result =
        groupAnagrams(words);

    cout << "Grouped Anagrams:\n";

    for (auto& group : result) {

        cout << "[ ";

        for (string word : group) {
            cout << word << " ";
        }

        cout << "]\n";
    }

    return 0;
}