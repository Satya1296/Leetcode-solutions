class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int j=0;j<=n;j++){
            int cnt=0;
            for(int i=0;i<32;i++){
                if((j>>i)&1) cnt++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};