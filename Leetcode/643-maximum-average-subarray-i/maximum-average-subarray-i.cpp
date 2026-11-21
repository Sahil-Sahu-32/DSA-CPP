class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = k-1;
        double ans = INT_MIN;
        int sum = 0;
        for(int i = 0; i<= right; i++){
            sum += nums[i];
        }
        ans = (double)sum/k;

        for(int i = 0; i<n; i++){
            double avg = 0;
            right++;
            if(right == n){
                break;
            }
            
            sum += nums[right];
            sum -= nums[left];
            avg = (double)sum/k;
            ans = max(avg, ans);
            left++;
        }
        return ans;
    }
};