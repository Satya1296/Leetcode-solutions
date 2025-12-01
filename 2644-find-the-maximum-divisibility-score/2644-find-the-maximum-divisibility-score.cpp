class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        vector<pair<int,int>>p;
        for(int i=0;i<divisors.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0){
                    count++;
                }
            }
            p.push_back({count,divisors[i]});
        }
        sort(p.begin(),p.end(),[](auto &a,auto &b){
            if(a.first!=b.first) return a.first>b.first;
            else return a.second<b.second;
        });
        return p[0].second;
    }
};