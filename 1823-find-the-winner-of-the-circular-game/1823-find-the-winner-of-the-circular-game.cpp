class Solution {
public:
    void solve(vector<int>&res,int j,int &k){
        if(res.size()==1) return;
        int d=(j+k-1)%res.size();
        res.erase(res.begin()+d);
        solve(res,d,k);
    }
    int findTheWinner(int n, int k) {
        vector<int>res;
        for(int i=1;i<=n;i++){
            res.push_back(i);
        }
        solve(res,0,k);
        return res[0];
    }
};