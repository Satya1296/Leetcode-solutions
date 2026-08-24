class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        int left=numRows*2-2,right=0;
        if(numRows==1) return s;
        string a;
        for(int i=0;i<numRows;i++){
            int j=i; // 0
            if(i==0 || i==numRows-1){
                while(j<n){ // 13
                    a+=s[j]; //p
                    j+=max(left,right); // 4,0
                }
            }
            bool flag=false;
            while(j<n){
                if(!flag){
                    a+=s[j]; 
                    j+=left;
                    flag=true;
                }
                else{
                    a+=s[j];
                    j+=right;
                    flag=false;
                }
            }
            left-=2;
            right+=2;
        }
        return a;
    }
};