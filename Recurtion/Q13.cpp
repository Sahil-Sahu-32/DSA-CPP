#include <iostream>
#include <vector>
using namespace std;

void findSubsequences(int arr[], int n, int index,
                      int target, vector<int>& current) {

    // Base case
    if (index == n) {

        if (target == 0) {
            for (int x : current) {
                cout << x << " ";
            }
            cout << endl;
        }

        return;
    }

    // Include current element
    current.push_back(arr[index]);

    findSubsequences(arr, n, index + 1,
                      target - arr[index], current);

    current.pop_back();

    // Exclude current element
    findSubsequences(arr, n, index + 1,
                      target, current);
}

int main() {

   
}