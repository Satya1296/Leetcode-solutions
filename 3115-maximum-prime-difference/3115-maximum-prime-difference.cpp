class Solution {
public:
    int maxi=101;
    vector<bool>arr=vector<bool>(maxi,true);
    void isprime(){
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<maxi;i++){
            for(int j=i*i;j<maxi;j+=i){
                arr[j]=false;
            }
        }
    }
    int maximumPrimeDifference(vector<int>& nums) {
        isprime();
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]]) a.push_back(i);
        }
        int maxi=*max_element(a.begin(),a.end());
        int mini=*min_element(a.begin(),a.end());
        return maxi-mini;
    }
};