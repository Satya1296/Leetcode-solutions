class Solution {
public:
    vector<vector<int>>res,ans;
    void solve(vector<int>&nums,int i,vector<int>&a,vector<int>&visit){
        int n=nums.size();
        if(i==n && i==a.size()){
            res.push_back(a);
            return;
        }
        for(int j=0;j<n;j++){
            if(visit[j]) continue;
            visit[j]=1;
            a.push_back(nums[j]); // 1 1 2 
            solve(nums,i+1,a,visit); // 1 0 0
            a.pop_back();
            // solve(nums,j+1,a,visit);
            visit[j]=0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>visit(nums.size(),0);
        vector<int>a;
        solve(nums,0,a,visit);
        set<vector<int>>st(res.begin(),res.end());
        res.assign(st.begin(),st.end());
        return res;
    }
};