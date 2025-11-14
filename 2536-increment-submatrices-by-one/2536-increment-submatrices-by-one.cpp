class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>q(n,vector<int>(n,0));
        for(int i=0;i<queries.size();i++){
            int r1=queries[i][0];
            int c1=queries[i][1];
            int r2=queries[i][2];
            int c2=queries[i][3];
            int r=r1;
            while(r<=r2){
                int c=c1;
                while(c<=c2){
                    q[r][c]++;
                    c++;
                }
                r++;
            }
        }
        return q;
    }
};