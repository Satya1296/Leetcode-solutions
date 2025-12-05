class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>res;
        if(num%3!=0) return res;
        long long ans=num/3;
        res.push_back(ans-1);
        res.push_back(ans);
        res.push_back(ans+1);
        return res;
    }
};