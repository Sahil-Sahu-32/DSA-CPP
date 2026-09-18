#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string>& board,
            int row,
            int col,
            int n) {

    // Check upper column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    // Upper-left diagonal
    for (int i = row - 1, j = col - 1;
         i >= 0 && j >= 0;
         i--, j--) {

        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Upper-right diagonal
    for (int i = row - 1, j = col + 1;
         i >= 0 && j < n;
         i--, j++) {

        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void solve(vector<string>& board,
           int row,
           int n) {

    // All queens placed
    if (row == n) {

        for (string row : board) {
            cout << row << endl;
        }

        cout << endl;

        return;
    }

    for (int col = 0; col < n; col++) {

        if (isSafe(board, row, col, n)) {

            // Place queen
            board[row][col] = 'Q';

            solve(board, row + 1, n);

            // Backtrack
            board[row][col] = '.';
        }
    }
}

int main() {

    int n = 4;

    vector<string> board(n, string(n, '.'));

    solve(board, 0, n);

    return 0;
}