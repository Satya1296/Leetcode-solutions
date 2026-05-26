class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string res="";
        while(ss >> word){
            string l=word;
            if(l.size()<=2){
                for(int i=0;i<l.size();i++){
                    l[i]=tolower(l[i]);
                }
            }
            else{
                l[0]=toupper(l[0]);
                for(int i=1;i<l.size();i++){
                    l[i]=tolower(l[i]);
                }
            }
            res+=l+" ";
        }
        res.pop_back();
        return res;
    }
};