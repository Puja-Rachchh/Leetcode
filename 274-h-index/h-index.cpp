class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans=0;
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        for(int i=0;i<citations.size();i++){
            cout<<citations[i]<<i+1<<endl;
            if(citations[i]>=i+1) ans=i+1;
        }
        return ans;
    }
};