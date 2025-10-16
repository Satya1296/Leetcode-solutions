class Solution {
public:
    int magicalString(int n) {
        if(n<=3) return 1;
        vector<int>s={1,2,2};
        int i=2;
        int num=1;
        while(s.size()<n){
            int count=s[i];
            for(int j=0;j<count;j++){
                s.push_back(num);
            }
            num=3-num;
            i++;
        }
        return count(s.begin(),s.begin()+n,1);
    }
};