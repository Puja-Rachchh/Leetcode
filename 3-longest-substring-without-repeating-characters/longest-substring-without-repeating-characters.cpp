class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;
        int res = 0;
        vector<bool> vis(128, false); 

        int left = 0;
        for (int right = 0; right < n; right++) {
            while (vis[s[right]]) {
                vis[s[left]] = false;
                left++;
            }
            
            vis[s[right]] = true;
            
            res = max(res, right - left + 1);
        }
        return res;
    }
};