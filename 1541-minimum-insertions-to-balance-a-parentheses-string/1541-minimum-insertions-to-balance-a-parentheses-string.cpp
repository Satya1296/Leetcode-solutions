class Solution {
public:
    int minInsertions(string s) {
        int cnt=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') cnt++;
            else{
                if(i+1<s.size() && s[i+1]==')'){
                    i++;
                }
                else{
                    c++;
                }
                if(cnt>0) cnt--;
                else c++;
            }
        }
        c+=cnt*2;
        return c;
    }
};