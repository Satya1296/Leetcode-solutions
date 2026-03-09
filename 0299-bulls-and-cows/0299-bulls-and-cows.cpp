class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
                mpp[secret[i]]++;
            }
        }
        for(int i=0;i<guess.size();i++){
            if(secret[i]!=guess[i] && mpp[guess[i]]>0){
                cows++;
                mpp[guess[i]]--;
            }
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};