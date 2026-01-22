class Solution {
public:
    int findPair(vector<int>& nums){
        int mini=INT_MAX;
        int temp=0;
        int ans;
        for(int i=0;i<nums.size()-1;i++){
            temp=nums[i]+nums[i+1];
            if(temp<mini){
                mini=temp;
                ans=i;
            }
        }
        return ans;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int cnt=0;
        while(!is_sorted(nums.begin(),nums.end())){
            int posi=findPair(nums);
            nums[posi]=nums[posi]+nums[posi+1];
            nums.erase(nums.begin()+posi+1);
            cnt++;
        }
        return cnt;
    }
};