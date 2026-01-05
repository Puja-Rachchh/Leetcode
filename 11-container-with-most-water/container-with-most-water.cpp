class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j= height.size()-1;
        int max=0;
        int temp=0;
        while(i<j){
            temp=min(height[i],height[j])*(j-i);
            if(temp>max){
                max=temp;
            }
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max;
        
    }
};