class Solution {
public:
    string greatestLetter(string s) {
        string l="";
        string u="";
        for(char c:s){
            if(islower(c)){
                l+=c;
            }
            else{
                u+=c;
            }
        }
        char ans=0;
        for(int i=0;i<l.size();i++){
            for(int j=0;j<u.size();j++){
                if(l[i]==tolower(u[j])){
                    ans=max(ans,u[j]);
                }
            }
        }
        if(ans==0) return "";
        return string(1,ans);
    }
};