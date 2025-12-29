class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples=0;
        for(auto a:apple){
            apples+=a;
        }
        sort(capacity.begin(),capacity.end());
        int cap=0;
        int j=capacity.size()-1;
        int count=0;
        while(cap<apples){
            cap+=capacity[j];
            count++;
            j--;
        }
        return count;

    }
};