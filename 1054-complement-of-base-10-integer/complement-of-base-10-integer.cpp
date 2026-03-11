class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int len=(int)(log2(n));
        string st = bitset<32>(n).to_string().substr(32-len-1);
        string res;
        for(char c: st){
            if(c=='1'){
                res+='0';
            }else{
                res+="1";
            }
        }
        unsigned long decimalValue = bitset<64>(res).to_ulong();
        return (int)decimalValue;
    }
};