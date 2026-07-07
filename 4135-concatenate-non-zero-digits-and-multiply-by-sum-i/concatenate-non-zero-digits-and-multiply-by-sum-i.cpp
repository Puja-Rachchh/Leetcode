class Solution {
public:
    long long sumAndMultiply(int n) {
        string num = to_string(n);
        string x="";
        long long sum=0;
        for(char c:num){
            if(c!='0'){
                x+=c;
                sum+=(c-'0');
            }
        }
        if(x==""){
            return 0;
        }
        long long ans= stoll(x)* sum;
        return ans;
    }
};