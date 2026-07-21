class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mpp;
        int j=0,mini=INT_MAX;
        for(int i=0;i<cards.size();i++){
            mpp[cards[i]]++;
            while(mpp[cards[i]]>1){
                mini=min(mini,i-j+1);
                mpp[cards[j]]--;
                j++;
            }
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};