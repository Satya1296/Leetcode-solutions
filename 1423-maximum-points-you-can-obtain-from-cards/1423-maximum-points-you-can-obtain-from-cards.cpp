class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int res=0;
        for(int i=0;i<k;i++){
            res+=cardPoints[i]; // 6
        }
        int s=res;
        int n=cardPoints.size();
        for(int i=k-1;i>=0;i--){ 
            s-=cardPoints[i]; // 3 //2 // 7 
            s+=cardPoints[n-k+i]; //4 // 8 // 12
            res=max(s,res); // 6 // 8 //12 
        }
        return res;
    }
};