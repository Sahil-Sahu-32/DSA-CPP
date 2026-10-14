class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int max_diff = INT_MAX;
        int diff;
        int result = nums[0] + nums[1] + nums[2];
        for(int i = 0; i<n-2; i++){
            int left = i+1;
            int right = n-1;
        
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                diff = abs( sum - target);
                
                if(sum == target){
                     result = sum;
                    return result;
                }
                else if( sum < target ){
                    if(diff < max_diff){
                        max_diff = diff;
                        result = sum;
                    }
                    left++;
                }
                else{
                    if(diff < max_diff){
                         max_diff = diff;
                        result = sum;
                    }
                    right--;
                }
            }
        }
        return result;
    }
};