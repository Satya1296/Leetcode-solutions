class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        if(units[0].size()==1){
            long long ans=0;
            for(auto &row:units){
                ans+=row[0];
            }
            return ans;
        }
        long long sum=0;
        int g_min=INT_MAX;
        int s_min=INT_MAX;
        for(auto &row:units){
            int mini1=INT_MAX;
            int mini2=INT_MAX;
            for(int x:row){
                if(x<mini1){
                    mini2=mini1;
                    mini1=x;
                }
                else if(x<mini2){
                    mini2=x;
                }
            }
            g_min=min(g_min,mini1);
            sum+=mini2; // 3+2=5
            s_min=min(mini2,s_min);
        }
        return g_min+sum-s_min;
    }
};