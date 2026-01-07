class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length/2;
      
    Arrays.sort(nums);
    int count=0;
    if(nums.length==1)
    {
        return nums[0];
    }

    for(int i=1;i<nums.length;i++)
    {
        if(nums[i-1]==nums[i])
        {
        count++;
        }
        else
        {
            count=0;
        }
        if((count+1)>n)
        {
            return nums[i];
        }
    }
    return -1;

    }
}