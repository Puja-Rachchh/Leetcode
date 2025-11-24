class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int curr=0;
        vector<bool> res;
        for(int n: nums){
            curr = ((curr<<1)+n) % 5;
            res.push_back(curr%5 ==0);
        }
        return res;
    }
};
