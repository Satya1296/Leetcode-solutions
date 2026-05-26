class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt=0;
        for(char ch='a'; ch<='z';ch++){
            int l=-1,u=-1;
            for(int i=0;i<word.size();i++){
                if(word[i]==ch){
                    l=i;
                }
                if(word[i]==toupper(ch) && u==-1){
                    u=i;
                }
            }
            if(l!=-1 && u!=-1 && l<u){
                cnt++;
            }
        }
        return cnt;
    }
};