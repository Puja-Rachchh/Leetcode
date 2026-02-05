class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> nums(m+n);
        for(int i=0;i<m;i++){
            nums[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            nums[m+i]=nums2[i];
        }
        sort(nums.begin(), nums.end());
    int o = nums.size() ;
    if(o % 2 == 0){
        float k = nums[o/2 - 1];
        float p = nums[(o) / 2];
        float a = (k + p) / 2.0f;
        return a;
        
    } else{
        float k = nums[o/2];
        return k;
    } 
    return 0;
    }
};