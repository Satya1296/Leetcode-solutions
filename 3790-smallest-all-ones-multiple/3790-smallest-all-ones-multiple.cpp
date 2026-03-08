class Solution {
public:
    int minAllOneMultiple(int k) {
        int s=0;
        for(int i=1;i<=k;i++){
            s=(s*10+1)%k;
            if(s==0) return i;
        }
        return -1;
    }
};