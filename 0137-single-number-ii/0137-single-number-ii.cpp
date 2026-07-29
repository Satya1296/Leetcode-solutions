class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int,int>freq;
        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        // }
        // int res;
        // for(auto i:freq){
        //     if(i.second==1){
        //         res=i.first;
        //     }
        // }
        // return res;
        int ans=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(int x:nums){
                if((x>>i)&1) cnt++;
            }
            if(cnt%3) ans|=(1<<i);
        }
        return ans;
    }
};