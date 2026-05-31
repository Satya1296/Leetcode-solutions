class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        // 3 5 9 19 21
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(mass>=asteroids[i]){
                mass+=asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};