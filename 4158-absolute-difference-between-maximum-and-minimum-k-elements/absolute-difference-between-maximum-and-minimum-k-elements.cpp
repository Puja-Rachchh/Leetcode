class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0;
        int sum2=0;
        for(int i=0;i<k;i++){
            sum1+=nums[i];
            sum2+=nums[nums.size()-1-i];
        }
        return sum2-sum1;
    }
};