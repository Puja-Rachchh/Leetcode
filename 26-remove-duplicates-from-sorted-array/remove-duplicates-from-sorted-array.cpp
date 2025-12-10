class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=1;
        for(int j=1;j<nums.size();j++){
            if(nums[res-1]!=nums[j]){
                nums[res]=nums[j];
                res++;
            }
        }
        return res;
    }
};