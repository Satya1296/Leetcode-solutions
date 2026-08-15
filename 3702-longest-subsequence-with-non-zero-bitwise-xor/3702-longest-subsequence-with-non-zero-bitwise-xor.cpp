class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // all ele xor means size-1 
        // no means size return 
        vector<int>arr=nums;
        int x=0,cnt=0;
        for(auto c:arr){
            x^=c;
            if(x==0) cnt++;
        }
        if(x!=0) return arr.size();
        else if(cnt==arr.size()) return 0;
        else return arr.size()-1;
    }
};