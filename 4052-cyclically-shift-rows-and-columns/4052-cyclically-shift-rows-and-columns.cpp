class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0;i<n;i++){
            vector<int>a(n);
            for(int j=0;j<n;j++){
                a[j]=grid[i][(j+rowShift[i])%n];
            }
            grid[i]=a;
        }
        for(int j=0;j<n;j++){
            vector<int>a(n);
            for(int i=0;i<n;i++){
                a[i]=grid[(i+colShift[j])%n][j];
            }
            for(int i=0;i<n;i++){
                grid[i][j]=a[i];
            }
        }
        return grid;
    }
};