class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        int n=s.size();
        int l=n/2;
        string a=s.substr(0,l);
        string b=s.substr(l,n);
        for(char c:a){
            if(isvowel(c)) cnt1++;
        }
        for(char c:b){
            if(isvowel(c)) cnt2++;
        }
        return cnt1==cnt2;
    }
};