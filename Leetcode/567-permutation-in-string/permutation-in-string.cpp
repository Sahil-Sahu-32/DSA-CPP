class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int k = s1.size();
       int n = s2.size();
       int left = 0;
       int right = k-1;
       bool ans = false;
       if (k > n) return false;
       unordered_map<char, int> s1_map;
       unordered_map<char, int> s2_map;

       for(int i = 0; i < k; i++){
        s1_map[s1[i]]++;
        s2_map[s2[i]]++;
       } 

        for(int i = 0; i < n; i++){
            if(s1_map == s2_map){
                ans = true;
            }
            right++;
            
            if(right == n)
            break;

            s2_map[s2[right]]++;
            s2_map[s2[left]]--;
            if(s2_map[s2[left]] == 0){
                s2_map.erase(s2[left]);
            }
            left++;

        }
        return ans;
    }
};