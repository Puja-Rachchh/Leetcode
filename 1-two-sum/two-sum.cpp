class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int rem=target-a;
            if(mp.find(rem)!=mp.end()){
                ans.push_back(mp[rem]);
                ans.push_back(i);
                return ans;
            }
            mp[a]=i;
        }
        return {-1,-1};
    }
};