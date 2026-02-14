class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end()); // 1 2 3 3 4 5 
        int sum=skill[0]+skill[skill.size()-1];
        long long total=0;
        int n=skill.size();
        for(int i=0;i<n/2;i++){
            if(skill[i]+skill[n-i-1]!=sum){
                return -1;
            }
            total+=(long long) (skill[i]*skill[n-i-1]);
        }
        return total;
    }
};