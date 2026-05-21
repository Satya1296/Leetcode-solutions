class Solution {
public:
    int digits(int num){
        int c=0;
        while(num>0){
            c++;
            num/=10;
        }
        return c;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>pref;
        for(int num:arr1){
            int x=num;
            while(x>0){
                pref.insert(x); 
                x/=10;    // 1 10 100
            }
        }
        int cnt=0;
        for(int num2:arr2){
            int y=num2;
            while(y>0){
                if(pref.count(y)){
                    cnt=max(cnt,digits(y));
                }
                y/=10;
            }
        }
        return cnt;
    }
};