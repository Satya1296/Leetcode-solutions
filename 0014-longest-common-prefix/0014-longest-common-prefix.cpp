
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs[0].size();i++){
            int f=0;
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                char c=strs[j][i]; 
                if(i>=strs[j].size() || ch!=c){
                    f=1;
                    break;
                }
            }
            if(f==0){
                str.push_back(ch);
            }
            else break;
        }
        return str;
    }
};