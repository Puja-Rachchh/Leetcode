class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        letters.push_back(target);
        sort(letters.begin(),letters.end());
        for(int i=0;i<letters.size();i++){
            if(letters[i]==target && i!=letters.size()-1 && letters[i+1]>letters[i]){
                return letters[i+1];
            }
        }
        return letters[0];
    }
};