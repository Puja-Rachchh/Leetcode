class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int max_col=1;
        int max_row=1;
        int row=1;
        int col=1;
        for(int i=0;i<hBars.size()-1;i++){
            
            if(hBars[i]+1==hBars[i+1]) row++;
            else{
                max_row=max(max_row,row);
                row=1;
            }
        }
        max_row=max(max_row,row);
        
        
        for(int i=0;i<vBars.size()-1;i++){
            
            if(vBars[i]+1==vBars[i+1]) col++;
            else{
                max_col=max(max_col,col);
                col=1;
            }
        }
        max_col=max(max_col,col);
        
        int min_len =min(max_col+1,max_row+1);
        int area= min_len*min_len;
        return area;
    }
};