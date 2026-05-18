class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int cnt=0,score=0;
        for(int i=0;i<n;i++){
            if(cnt==10) break;
            else if(events[i]=="0" || events[i]=="1" || events[i]=="2" || events[i]=="3" || events[i]=="4" || events[i]=="6"){
                score+=stoi(events[i]);
            }
            else if(events[i]=="WD" || events[i]=="NB"){
                score+=1;
            }
            else if(events[i]=="W"){
                cnt++;
            }
        }
        return {score,cnt};
    }
};