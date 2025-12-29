class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto g : grid){
            for(auto num:g){
                if(num<0){count++;}
            }
        }
        return count;
    }
};