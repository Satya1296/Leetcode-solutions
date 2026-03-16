class Solution {
public:
    int digits(int n){
        if(n==0) return 1;
        int cnt=0;
        if(n<0){
            cnt++;
            n=-n;
        }
        while(n>0){
            n/=10;
            cnt++;
        }
        return cnt;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int>v;
        int m=grid.size();
        int n=grid[0].size();
        for(int j=0;j<n;j++){
            int maxi=0;
            for(int i=0;i<m;i++){
                maxi=max(maxi,digits(grid[i][j]));
            }
            v.push_back(maxi);
        }
        return v;
    }
};