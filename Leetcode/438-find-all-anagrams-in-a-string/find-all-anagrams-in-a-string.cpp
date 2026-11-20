class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int k = p.size();
       unordered_map<char, int> s_map;
       int n = s.size();
       int left = 0;
       int right = k;
       unordered_map<char, int> p_map;
       vector<int>ans;

       if(k>n) return ans;

       for(int i = 0; i<k; i++){
        s_map[s[i]]++;
        p_map[p[i]]++;
       } 

       while(right<=n){
        if(p_map == s_map){
            ans.push_back(left);
        }
        if(right == n)
        break;

        s_map[s[left]]--;

        if(s_map[s[left]] == 0){
            s_map.erase(s[left]);
        }

        s_map[s[right]]++;

        left++;
        right++;
       }
       return ans;
    }
};