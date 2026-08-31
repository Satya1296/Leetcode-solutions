/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>a;
        ListNode *temp=head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>arr;
        if(a.size()<=2) return {-1,-1};
        for(int i=1;i<a.size()-1;i++){
            if(a[i]<a[i-1] && a[i]<a[i+1]){
                arr.push_back(i);
            }
            else if(a[i]>a[i-1] && a[i]>a[i+1]){
                arr.push_back(i);
            }
        }
        if(arr.size()<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            mini=min(mini,arr[i]-arr[i-1]);
        }
        int maxi=arr.back()-arr.front();
        return {mini,maxi};
    }
};