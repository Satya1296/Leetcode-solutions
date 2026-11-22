class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>res;
        int a=0,b=0;
        for(int i=0;i<rain.size();i++){
            if(i<rain.size()-1 && rain[i]==1 && rain[i+1]==1){
                if(a<=b){
                    res.push_back("Alice");
                    a++;
                }
                else{
                    res.push_back("Bob");
                    b++;
                }
            }
            else if(rain[i]==1){
                res.push_back("Bob");
                b++;
            }
            else if(rain[i]==0){
                res.push_back("None");
            }
        }
        return res;
    }
};