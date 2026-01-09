class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int,int> cnt;
        for(auto& flower:flowers){
            cnt[flower[0]]++;
            cnt[flower[1]+1]--;
        }
        int prev=0;
        vector<int>ans;
        for(auto& x:cnt){
            cnt[x.first]+=prev;
            prev=cnt[x.first];
        }
        for(int person:people){
            auto curr =cnt.upper_bound(person);
            if(curr==cnt.begin())ans.push_back(0);
            else{
                curr--;
                ans.push_back((*curr).second);
            }
        }        
        return ans;
    }
};