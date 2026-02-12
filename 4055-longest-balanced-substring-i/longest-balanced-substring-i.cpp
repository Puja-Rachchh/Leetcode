class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int maxi = 0;
        bool balanced = true;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;
            for (int j = i; j < n; j++) {
                freq[s[j]]++;

                int temp = freq[s[j]];
                for (auto it : freq) {
                    if (it.second != temp) {
                        balanced = false;
                        break;
                    }
                }
                if (balanced) {
                    maxi = max(maxi, j - i + 1);
                }
                balanced=true;
            }
        }
        return maxi;
    }
};