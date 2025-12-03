class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>res;
        long long sum=0;
        for(int i=0;i<word.size();i++){
            sum=(sum*10+(word[i]-'0'))%m;
            if(sum==0) res.push_back(1);
            else res.push_back(0);
        }
        return res;
    }
};