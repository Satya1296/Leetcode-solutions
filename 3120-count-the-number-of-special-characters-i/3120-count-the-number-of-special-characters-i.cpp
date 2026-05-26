class Solution {
public:  
    int numberOfSpecialChars(string word) {
        set<char>lower;
        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                lower.insert(word[i]); // abc
            }
        }
        string res(lower.begin(),lower.end());
        int cnt=0;
        for(int i=0;i<res.size();i++){ //abc
            for(int j=0;j<word.size();j++){ // aaAbcBC
                if(toupper(res[i])==word[j]){
                cnt++;
                break;
                }
            }
        }
        return cnt;
    }
};