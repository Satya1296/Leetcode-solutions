class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sum=0,ans=0;
        for(int i=0;i<energy.size();i++){
            sum+=energy[i]; //10
        }
        if(initialEnergy<=sum){
            ans+=(sum-initialEnergy+1); // 10-5+1=6
        }
        int curr=initialExperience;
        for(int i=0;i<experience.size();i++){
            if(curr<=experience[i]){
                int need=experience[i]+1-curr;
                ans+=need;
                curr+=need;
            }
            curr+=experience[i];
        }
        return ans;
    }
};