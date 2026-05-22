class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        int n=grid.size();
        int m=grid[0].size();
        int f=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<m;j++){
                    if(f==0) ans.push_back(grid[i][j]);
                    f=1-f;
                }
            }
            else{
                for(int j=m-1;j>=0;j--){
                    if(f==0) ans.push_back(grid[i][j]);
                    f=1-f;
                }
            }
        }
        return ans;
    }
};