class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        int n=word.size();
        for(char ch:word){
            if(isupper(ch)){
                cnt++;
            }
        }
        if(cnt==n){
            return true;
        }
        else if(isupper(word[0]) && cnt==1){
            return true;
        }
        else if(cnt==0){
            return true;
        }
        return false;
    }
};