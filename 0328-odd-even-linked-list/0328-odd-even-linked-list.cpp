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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>odd;
        vector<int>even;
        ListNode *temp=head;
        int cnt=1;
        while(temp!=NULL){
            if(cnt%2){
                odd.push_back(temp->val);
            }
            else{
                even.push_back(temp->val);
            }
            cnt++;
            temp=temp->next;
        }
        temp=head;
        for(int x:odd){
            temp->val=x;
            temp=temp->next;
        }
        for(int x:even){
            temp->val=x;
            temp=temp->next;
        }
        return head;
    }
};