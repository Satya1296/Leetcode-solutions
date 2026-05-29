class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        for(int i=0;i<n;i++){
            ans+='a';
        }
        if(n%2==1) return ans;
        else{
            ans[ans.length()-1]='b';
        }
        return ans;
    }
};