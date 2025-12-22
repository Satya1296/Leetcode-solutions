class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long sum=0;
        while(i<j){
            string s1=to_string(nums[i]);
            string s2=to_string(nums[j]);
            string res=s1+s2;
            sum+=stoll(res);
            i++;
            j--;
        }
        if(i==j) sum+=nums[i];
        return sum;
    }
};