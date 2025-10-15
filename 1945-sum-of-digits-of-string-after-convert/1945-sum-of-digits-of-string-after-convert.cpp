class Solution {
public:
    int getLucky(string s, int k) {
        vector<int>res;
        for(int i=0;i<s.size();i++){
            res.push_back(s[i]-'a'+1); // 9999
        }
        //vector<int>ans;
        while(k--){
            int sum=0;
            for(int i=0;i<res.size();i++){
                while(res[i]>0){
                    sum+=res[i]%10;
                    res[i]=res[i]/10;
                }
            }
            res.clear();
            res.push_back(sum);
        }
        return res[0];
    }
};