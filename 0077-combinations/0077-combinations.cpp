class Solution {
public:
    vector<vector<int>>ans;
    vector<int>a;
    void solve(int n,int k,vector<int>&a,int i){
        if(a.size()==k){
            ans.push_back(a);
            return;
        }
        for(int j=i;j<=n;j++){
            a.push_back(j);
            solve(n,k,a,j+1);
            a.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        solve(n,k,a,1);
        return ans;
    }
};