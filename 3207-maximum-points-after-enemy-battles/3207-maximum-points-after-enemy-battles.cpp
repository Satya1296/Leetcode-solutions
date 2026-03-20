class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        sort(enemyEnergies.begin(),enemyEnergies.end());
        if(currentEnergy<enemyEnergies[0]) return 0;
        long long s=currentEnergy;
        for(int j=enemyEnergies.size()-1;j>0;j--){
            s+=enemyEnergies[j];
        }
        return s/enemyEnergies[0];
    }
};