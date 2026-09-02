class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) cnt++;
        }
        if(cnt>0) return n-cnt;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int g=0;
            for(int j=i;j<n;j++){
                g=__gcd(g,nums[j]);
                if(g==1){ // 1
                    mini=min(mini,j-i+1); // 2
                }
            }
        }
        if(mini==INT_MAX) return -1;
        return (mini-1)+(n-1); // 1+3=4
    }
};