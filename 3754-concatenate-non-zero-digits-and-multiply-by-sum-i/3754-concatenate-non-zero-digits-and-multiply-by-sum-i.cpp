class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        vector<int>res;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                res.push_back(s[i]-'0');
            }
        }
        int sum=0;
        for(int i=0;i<res.size();i++){
            sum+=res[i];
        }
        int number=0;
        for(int d:res){
            number=number*10+d;
        }
        return (long long)sum*number;
    }
};