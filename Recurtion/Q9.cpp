#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, int index, vector<int>& current) {
    if (index == nums.size()) {
        cout << "{ ";
        for (int x : current)
            cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // Include current element
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current);

    // Exclude current element
    current.pop_back();
    generateSubsets(nums, index + 1, current);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> current;

    generateSubsets(nums, 0, current);
}