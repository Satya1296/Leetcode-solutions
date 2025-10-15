class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s1=to_string(num1),s2=to_string(num2),s3=to_string(num3);
        s1=string(4-s1.size(),'0')+s1; // 0001
        s2=string(4-s2.size(),'0')+s2; // 0010
        s3=string(4-s3.size(),'0')+s3;
        string key="";
        for(int i=0;i<4;i++){
            key+=min({s1[i],s2[i],s3[i]});
        }
        return stoi(key);
    }
};