class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>res;
        for(int i=0;i<words.size();i++){
            string s= "";
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==separator){
                    if(!s.empty()){
                        res.push_back(s); 
                        s="";
                    }
                }
                else{
                    s+=words[i][j]; // one 
                }
            }
            if(!s.empty()){
                res.push_back(s);
            }
        }
        return res;
    }
};