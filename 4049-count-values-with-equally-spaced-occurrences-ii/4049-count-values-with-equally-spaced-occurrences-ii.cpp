class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++) mpp[nums[i]].push_back(i);
        int ans=0;
        for(auto it:mpp){
            vector<int>a=it.second;
            if(a.size()>=3){
                bool flag=true;
                int d=a[1]-a[0];
                for(int i=2;i<a.size();i++){
                    if(a[i]-a[i-1]!=d){
                        flag=false;
                        break;
                    }
                }
                if(flag) ans++;
            }
        }
        return ans;
    }
};