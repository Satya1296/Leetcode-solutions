class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int>res;
        res.push_back(releaseTimes[0]);
        for(int i=0;i<releaseTimes.size()-1;i++){
            res.push_back(releaseTimes[i+1]-releaseTimes[i]);
        }
        string l="";
        int maxi=*max_element(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            if(maxi==res[i]){
                l+=keysPressed[i];
            }
        }
        cout<<l<<endl;
        sort(l.rbegin(),l.rend());
        return l[0];
    }
};