
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> poss;
        vector<int> neg;

        int size = nums.size();

        for (int i = 0; i < size; i++) {
            if (nums[i] >= 0) {
                poss.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        int n = poss.size();
        int m = neg.size();

        for (int i = 0; i < n; i++) {
            poss[i] = poss[i] * poss[i];
        }

        for (int i = 0; i < m; i++) {
            neg[i] = neg[i] * neg[i];
        }

        reverse(neg.begin(), neg.end());

        vector<int> square(n + m);

        int i = 0, j = 0, id = 0;

        while (i < n && j < m) {
            if (poss[i] <= neg[j]) {
                square[id++] = poss[i++];
            } else {
                square[id++] = neg[j++];
            }
        }

        while (i < n) {
            square[id++] = poss[i++];
        }

        while (j < m) {
            square[id++] = neg[j++];
        }

        return square;
    }
};
