class Solution {
public:
    bool isprime(int n){
        if(n==0 || n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(isprime(nums[i][i])) maxi=max(maxi,nums[i][i]);
            if(isprime(nums[i][n-1-i])) maxi=max(maxi,nums[i][n-1-i]);
        }
        return maxi;
    }
};