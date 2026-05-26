class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int l=1;
        int sum=0;
        for(char ch:s){
            int w=widths[ch-'a'];
            if(sum+w>100){
                l++;
                sum=w;
            }
            else{
                sum+=w;
            }
        }
        return {l,sum};
    }
};