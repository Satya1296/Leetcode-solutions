class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long>p;
        for(int i:nums){
            p.push(i); // 10 3 3 3 1 
        }
        long long sum=0;
        while(k--){
            long long top=p.top(); // 10
            p.pop();
            sum+=top;
            long long val=(top+2)/3;
            p.push(val);
        }
        return sum;
    }
};