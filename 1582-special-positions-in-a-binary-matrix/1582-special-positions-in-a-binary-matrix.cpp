class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt=0;
        int m=mat.size(),n=mat[0].size();
        vector<int>row(m);
        vector<int>col(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && row[i]==1 && col[j]==1) cnt++;
            }
        }
        return cnt;
    }
};