class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int cnt=0;
            for(int j=0;j<32;j++){
                if((i>>j)&1) cnt++; 
            }
            res.push_back(cnt);
        }
        return res;
    }
};