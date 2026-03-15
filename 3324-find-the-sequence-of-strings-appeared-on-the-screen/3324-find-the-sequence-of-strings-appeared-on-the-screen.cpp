class Solution {
public:
    vector<string> stringSequence(string target) {
        string res="";
        vector<string>ans;
        for(char c:target){
            res.push_back('a');
            ans.push_back(res);
            while(res.back()!=c){
                res.back()=res.back()+1;
                ans.push_back(res);
            }
        }  
        return ans;
    }
};