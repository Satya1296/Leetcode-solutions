class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int x=0,y=0;
        vis[0][0]=true;
        while(1){
            int a=x,b=y;
            if(grid[x][y]=='L') b--;
            if(grid[x][y]=='R') b++;
            if(grid[x][y]=='U') a--;
            if(grid[x][y]=='D') a++;
            if(a<0 || a>=m || b<0 || b>=n || vis[a][b]) break;
            x=a;
            y=b;
            vis[x][y]=true;
        }
        return {x,y};
    }
};