class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int> freq;
        for(int num:nums){
            freq[num]++;
            if(freq[num]==n) return num;
        }
        return 0;
    }
};