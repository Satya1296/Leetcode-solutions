class Solution {
public:
    int x;
    int isdigit(int n){
        int cnt=0;
        while(n>0){
            int d=n%10;
            if(d==x) cnt++;
            n/=10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        x=digit;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=isdigit(nums[i]);
        }
        return ans;
    }
};