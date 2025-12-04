class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.length();
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<n && directions[l]=='L') l++;
        while(r>=l && directions[r]=='R') r--;
        for(int i=l;i<=r;i++){
            if(directions[i]!='S'){
                ans+=1;
            }
        }
        return ans;
    }
};