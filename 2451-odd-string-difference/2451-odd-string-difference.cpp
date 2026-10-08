class Solution {
public:
    string oddString(vector<string>& words) {
        vector<vector<int>>diff;
        for(int i=0;i<words.size();i++){
            vector<int>res;
            for(int j=0;j<words[i].size()-1;j++){
                res.push_back(words[i][j+1]-words[i][j]);
            }
            diff.push_back(res);
        }
        for(int i=1;i<words.size();i++){
            if(diff[i]!=diff[0]){
                if(i==1){
                    if(diff[0]==diff[2]){
                        return words[1];
                    }
                    else{
                        return words[0];
                    }
                }
                return words[i];
            }
        }
        return "";
    }
};