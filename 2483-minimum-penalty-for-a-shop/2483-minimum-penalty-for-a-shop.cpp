class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty=0,close=0;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                penalty--; // -1 //-1 // 1 // 0
            }
            else penalty++;
            if(penalty<0){ 
                penalty=0; //0 //0 
                close=i+1; // close=1; //close=2 
            }
        }
        return close;
    }
};