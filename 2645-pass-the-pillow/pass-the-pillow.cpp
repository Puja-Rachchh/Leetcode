class Solution {
public:
    int passThePillow(int n, int time) {
        int size =2*(n-1);
        int pass=time%size;
        //int dir=time/size;
        if(pass<n){
            return pass+1;
        }
        else{
            return size-pass+1;
        }
        return -1;
    }
};