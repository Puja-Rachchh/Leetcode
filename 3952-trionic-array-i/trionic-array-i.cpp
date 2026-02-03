class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0;
        int q=0;
        int z=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1] && q==0) p=i;
            else if(nums[i]<nums[i-1]&& z==0){
                q=i;
            }
            else if(nums[i]>nums[i-1]&& p!=0){
                z=i;
                
            }
            else{
                return false;
            }
        }
        cout<<p<<q<<z;
        return 0<p && p<q && q<z;
    }
};