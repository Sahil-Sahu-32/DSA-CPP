#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;

    int a[50][50];

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int num = 1;

    while (top <= bottom && left <= right) {

        // Left to Right
        for (int i = left; i <= right; i++) {
            a[top][i] = num;
            num++;
        }
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++) {
            a[i][right] = num;
            num++;
        }
        right--;

        // Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                a[bottom][i] = num;
                num++;
            }
            bottom--;
        }

        // Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = num;
                num++;
            }
            left++;
        }
    }

    cout << "\nSpiral Matrix:\n\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    return 0;
}