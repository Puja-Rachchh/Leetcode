class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        int ans=0;
        int n= nums.size();
        for(int num:nums){
            freq[num]++;
        }
        for(auto it:freq){
            if(it.second>n/2) ans=it.first;
        }
        return ans;
    }
};