class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k){ // 2 3 2 
                time+=min(tickets[i],tickets[k]); // 6
            }
            else{
                time+=min(tickets[i],tickets[k]-1);
            }
        }
        return time;
    }
};