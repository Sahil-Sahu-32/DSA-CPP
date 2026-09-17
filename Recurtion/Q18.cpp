#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board,
            int row,
            int col,
            int num) {

    // Check row
    for (int j = 0; j < 9; j++) {
        if (board[row][j] == num) {
            return false;
        }
    }

    // Check column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == num) {
            return false;
        }
    }

    // Check 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (board[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(vector<vector<int>>& board) {

    for (int row = 0; row < 9; row++) {

        for (int col = 0; col < 9; col++) {

            if (board[row][col] == 0) {

                for (int num = 1; num <= 9; num++) {

                    if (isSafe(board, row, col, num)) {

                        board[row][col] = num;

                        if (solveSudoku(board)) {
                            return true;
                        }

                        // Backtrack
                        board[row][col] = 0;
                    }
                }

                return false;
            }
        }
    }

    return true;
}

int main() {


    return 0;
}