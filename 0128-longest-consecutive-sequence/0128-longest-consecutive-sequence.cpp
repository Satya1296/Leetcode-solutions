class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 0 0 1 2 3 4 5 6 7 8
        int cnt=1;
        sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        vector<int>ans(s.begin(),s.end()); // 1 2 3 4 100 200
        int maxi=1;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]==ans[i]+1){
                cnt++;
            }
            else{
                cnt=1;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};