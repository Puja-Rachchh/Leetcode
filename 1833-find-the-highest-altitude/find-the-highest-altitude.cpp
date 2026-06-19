class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        vector<int> prefix_sum(n+1);
        prefix_sum[0]=0;
        for(int i=0;i<n;i++){
            prefix_sum[i+1]=prefix_sum[i]+gain[i];
        }
        int maxi=*max_element(prefix_sum.begin(),prefix_sum.end());
        return maxi;
    }
};