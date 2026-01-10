class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=1;
        long sum = nums[0];
        int minLen = INT_MAX;
        while(true){
            if(sum<target){
                right++;
                if(right>nums.size()){
                    break;
                }
                sum+=nums[right-1];
            }
            else{
                if(right-left<minLen){
                    minLen = right-left;
                }
                left++;
                sum-=nums[left-1];
            }
        }
        if(minLen<INT_MAX) return minLen;
        return 0;
    }
};