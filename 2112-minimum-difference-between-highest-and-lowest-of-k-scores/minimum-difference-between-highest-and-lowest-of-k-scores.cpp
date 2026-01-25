class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        int ans=INT_MAX;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-k+1;i++){
            int temp=nums[i+k-1]-nums[i];
            ans=min(ans,temp);
        }
        return ans;
    }
};