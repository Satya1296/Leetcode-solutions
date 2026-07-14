class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>ans;
        for(int k=0;k<n;k++){
        int i=0,j=k;
        while(i<m){
            if(grid[i][j]==1 && j+1<n && grid[i][j+1]==1){
                if(i==m-1){
                    j++;
                    ans.push_back(j);
                    break;
                }
                else{
                    i++;
                    j++;
                }
            }
            
            else if(grid[i][j]==-1 && j-1>=0 && grid[i][j-1]==-1){
                if(i==m-1){
                    j--;
                    ans.push_back(j);
                    break;         
                }
                else{
                    i++;
                    j--;
                }
            }
            else{
                ans.push_back(-1);
                break;
            }
        }
        }
        return ans;
    }
};