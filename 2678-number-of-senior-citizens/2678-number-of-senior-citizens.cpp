class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            int first=details[i][11]-'0';
            int second=details[i][12]-'0';
            if(first>=6 && second>1) ans++;
            else if(first>7) ans++;
        }
        return ans;
    }
};