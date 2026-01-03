class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ransomFreq;
        map<char,int> magazineFreq;
        for(char ransom: ransomNote){
            ransomFreq[ransom]++;
        }
        for(char mag: magazine){
            magazineFreq[mag]++;
        }
        for( char ran:ransomNote){
            if(ransomFreq[ran]>magazineFreq[ran]) return false;
        }
        return true;
    }
};