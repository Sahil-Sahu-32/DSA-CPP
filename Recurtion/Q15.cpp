#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<char>>& board,
            string& word,
            int row,
            int col,
            int index) {

    // Entire word found
    if (index == word.length()) {
        return true;
    }

    // Out of bounds
    if (row < 0 || row >= board.size() ||
        col < 0 || col >= board[0].size()) {
        return false;
    }

    // Wrong character
    if (board[row][col] != word[index]) {
        return false;
    }

    // Mark visited
    char original = board[row][col];

    board[row][col] = '#';

    bool found =
        search(board, word, row + 1, col, index + 1) ||
        search(board, word, row - 1, col, index + 1) ||
        search(board, word, row, col + 1, index + 1) ||
        search(board, word, row, col - 1, index + 1);

    // Backtrack
    board[row][col] = original;

    return found;
}

int main() {

    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    string word = "ABCCED";

    bool found = false;

    for (int i = 0; i < board.size(); i++) {

        for (int j = 0; j < board[0].size(); j++) {

            if (search(board, word, i, j, 0)) {
                found = true;
            }
        }
    }

    cout << (found ? "Found" : "Not Found");

    cout << endl;

    return 0;
}