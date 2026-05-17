class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        vector<int>e,o;
        while(num>0){
            int digit=num%10;
            if(digit%2==0) e.push_back(digit);
            else o.push_back(digit);
            num/=10;
        }
        sort(e.rbegin(),e.rend());
        sort(o.rbegin(),o.rend());
        int l=e.size()+o.size();
        int i=0,j=0;
        string res="";
        for(char c:s){
            int d=c-'0';
            if(d%2==0){
                res+=to_string(e[i++]);
            }
            else{
                res+=to_string(o[j++]);
            }
        }
        return stoi(res);
    }
};