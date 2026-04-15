class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int ans=INT_MAX;
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                int d=abs(i-startIndex);
                ans=min(ans,min(d,n-d));
            }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};