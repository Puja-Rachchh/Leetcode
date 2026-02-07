class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        vector<int> ans;
        for (auto it : freq) {
            while (it.second != 0) {
                ans.push_back(it.first);
                it.second--;
            }
        }
        nums = ans;
    }
};