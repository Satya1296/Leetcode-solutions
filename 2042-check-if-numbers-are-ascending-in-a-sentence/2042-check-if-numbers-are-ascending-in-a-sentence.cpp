class Solution {
public:
    bool increase(vector<int>nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool areNumbersAscending(string s) {
        vector<int>v;
        stringstream ss(s);
        string word="";
        while(ss >> word){
            if(isdigit(word[0])){
                int num=stoi(word);
                v.push_back(num);
            }
        }
        if(increase(v)) return true;
        return false;
    }
};