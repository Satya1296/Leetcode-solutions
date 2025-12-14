class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>copy=board;
        vector<pair<int,int>>p={
            {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}
        };
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int live=0;
                for(auto d:p){
                    int x=i+d.first;
                    int y=j+d.second;
                    if(x>=0 && x<m && y>=0 && y<n && copy[x][y]==1){
                        live++;
                    }
                }
                if(copy[i][j]==1){
                    if(live<2 || live>3) board[i][j]=0;
                }
                else {
                    if(live==3) board[i][j]=1;
                }
            }
        }
    }
};