class Solution {
public:
    bool winnerOfGame(string colors) {
        int count1=0,count2=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A')
            count1++;
            else if(colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B')
            count2++;
        }
        return count1>count2?true:false;
    }
};