class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        string first="",mid="";
        for(auto it:mpp){
            char ch=it.first;
            int cnt=it.second;
            while(cnt/2){
                first.push_back(ch);
                cnt-=2;
            }
            if(cnt==1){
                mid.push_back(ch);
            }
        }
        string second=first;
        reverse(second.begin(),second.end());
        return first+mid+second;
    }
};