class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>st;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                for(int k=0;k<n;k++){
                    if(k==i || k==j) continue;
                    if(digits[i]==0) continue;
                    if(digits[k]%2!=0) continue;
                    int num=100*digits[i]+10*digits[j]+digits[k];
                    st.insert(num);
                }
            }
        }
        vector<int>s(st.begin(),st.end());
        return s;
    }
};