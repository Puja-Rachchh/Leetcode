class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long masss=mass;
        for(int num: asteroids){
            if(masss>=num){
                masss+=num;
            }
            else{
                return false;
            }
        }
        return true;
    }
};