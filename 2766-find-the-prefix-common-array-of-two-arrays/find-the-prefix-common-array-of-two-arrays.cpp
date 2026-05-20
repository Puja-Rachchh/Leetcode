class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> freq;
        int n=A.size();
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            if(freq[A[i]]==2) cnt++;
            freq[B[i]]++;
            if(freq[B[i]]==2) cnt++;

            ans.push_back(cnt);

        }
        return ans;
    }
};