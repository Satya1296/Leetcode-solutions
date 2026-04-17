class Solution {
public:
    int reversed(int x){
        int s=0;
        while(x>0){
            s=s*10+(x%10);
            x/=10;
        }
        return s;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                ans=min(ans,abs(i-mp[nums[i]]));
            }
            int r=reversed(nums[i]);
            mp[r]=i;
        }
        return ans==INT_MAX ? -1:ans;
    }
};