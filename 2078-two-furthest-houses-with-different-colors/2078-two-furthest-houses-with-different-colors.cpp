class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0,j=colors.size()-1;
        int maxi=0;
        while(colors[i]==colors[j]){
            j--;
        }
        maxi=max(maxi,j-i);
        j=colors.size()-1;
        while(colors[j]==colors[i]){
            i++;
        }
        maxi=max(maxi,j-i);
        return maxi;
    }
};