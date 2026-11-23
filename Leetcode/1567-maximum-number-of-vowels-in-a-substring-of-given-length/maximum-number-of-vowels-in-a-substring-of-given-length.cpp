class Solution {
public:
    int maxVowels(string s, int k) {
        vector<char>vow = {'a','e','i','o','u'};
        int n = s.size();
        int left = 0;
        int right = k-1;
        int ans = 0;
        for(int i = 0; i<=right; i++){
            for(int j =0; j<5;j++){
                if(s[i] == vow[j])
                ans++;
            }
        }
        int sum = ans;
        for(int i = 0; i< n; i++){
            
            right++;
            if(right == n)
            break;

            for(int j =0; j<5;j++){
                if(s[left] == vow[j])
                sum--;
                if(s[right] == vow[j])
                sum++;
            }

            ans = max(ans, sum);
            left++;
        }
        return ans;
    }
};