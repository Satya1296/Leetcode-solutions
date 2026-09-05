class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans=0;
        for(int i=0;i<forts.size();i++){
            int s=0;
            for(int j=i+1;j<forts.size();j++){
                if(forts[j]==0) s++;
                else if(forts[i]==1 && forts[j]==-1 || forts[i]==-1 && forts[j]==1){
                    ans=max(ans,s);
                    break;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};