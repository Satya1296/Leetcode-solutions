class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        //5 -10 4 3 5 -9 9 -7 // k=2
        int maxi=INT_MIN;
        int n=energy.size();
        for(int i=n-1;i>=0;i--){
            if(i+k<n){
                energy[i]=energy[i]+energy[i+k];
            }
            maxi=max(maxi,energy[i]);
        }
        return maxi;
    }
};