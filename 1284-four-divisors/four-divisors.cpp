class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int num:nums){
            int cnt=0;
            int total=0;
            for(int i=1;i*i<=num;i++){
                if(num%i==0){
                    cnt++;
                    total+=i;
                    int temp=num/i;
                    if(i!=temp){
                        cnt++;
                        total+=temp;
                    }
                    if(cnt>4)break;
                   
                }
            }
            if(cnt==4 ){
                ans+=total;
            }
        }
        return ans;
    }
};