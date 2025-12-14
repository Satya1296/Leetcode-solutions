class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word,res="";
        int count=0;
        while(ss >> word){
            if(count==k) break;
            if(count>0) res+=" ";
            res+=word;
            count++;
        }
        return res;
    }
};