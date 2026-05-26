class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                res.push_back(grid[i][j]);
            }
        }
        
        unordered_map<int,int>mpp;
        for(int i:res){
            mpp[i]++;
        }
        int r,m;
        int n=grid.size();
        for(auto i:mpp){
            if(i.second==2){
                r=i.first;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(mpp[i]==0){
                m=i;
                break;
            }
        }
        return {r,m};
    }
};