class Solution {
public:
    int reverseDegree(string s) {
        int prod=1;
        int sum=0;
        for(int i=0;i<s.size();i++){
            int val=s[i]-'a'+1;
            prod=(27-val)*(i+1);
            sum+=prod;
        }
        return sum;
    }
};