class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1;
        string res2;
        for(int i=0;i<word1.size();i++){
            res1+=word1[i];
        }
        for(int j=0;j<word2.size();j++){
            res2+=word2[j];
        }
        return res1==res2;
    }
};