class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        for(int i=0;i<citations.size();i++){
            int h=n-i;
            if(citations[i]>=h){
                return h;
            }
        }
        return 0;
    }
};