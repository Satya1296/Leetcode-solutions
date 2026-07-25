class Solution {
public:
    int maxProduct(int n) {
        vector<int>res;
        while(n>0){
            res.push_back(n%10);
            n=n/10;
        }
        // 4 2 1
        sort(res.rbegin(),res.rend());
        return res[0]*res[1];
    }
};