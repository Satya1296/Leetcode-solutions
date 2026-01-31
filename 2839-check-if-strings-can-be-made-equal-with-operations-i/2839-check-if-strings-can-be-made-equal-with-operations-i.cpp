class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<int>even1,even2,odd1,odd2;
        even1.push_back(s1[0]);
        even1.push_back(s1[2]);
        even2.push_back(s2[0]);
        even2.push_back(s2[2]);
        odd1.push_back(s1[1]);
        odd1.push_back(s1[3]);
        odd2.push_back(s2[1]);
        odd2.push_back(s2[3]);
        sort(even1.begin(),even1.end());
        sort(even2.begin(),even2.end());
        sort(odd1.begin(),odd1.end());
        sort(odd2.begin(),odd2.end());
        return even1==even2 && odd1==odd2;
    }
};