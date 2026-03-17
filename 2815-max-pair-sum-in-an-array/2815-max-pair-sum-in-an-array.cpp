class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i:nums){
            int temp=i;
            int maxi=0;
            while(temp>0){
                maxi=max(maxi,temp%10);
                temp/=10;
            }
            mpp[maxi].push_back(i);
        }
        int ans=-1;
        for(auto i:mpp){
            vector<int>v=i.second;
            if(v.size()>=2){
                sort(v.begin(),v.end());
                int n=v.size();
                ans=max(ans,v[n-1]+v[n-2]);
            }
        }
        return ans;
    }
};