class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<=n-k;i++){
            set<int>st;
            for(int j=i;j<i+k;j++){
                st.insert(nums[j]);
            }
            for(int x:st) mpp[x]++;
        }
        int maxi=-1;
        for(auto it:mpp){
            if(it.second==1){
                maxi=max(maxi,it.first);
            }
        }
        return maxi;
    }
};