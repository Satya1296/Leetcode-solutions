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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        ListNode *temp=head; // 2
        while(temp!=NULL){
            int greater=0;
            ListNode *ptr=temp->next; // 1
            while(ptr!=NULL){
                if(temp->val < ptr->val){
                    greater=ptr->val;
                    break;
                }
                ptr=ptr->next;
            }
            res.push_back(greater);
            temp=temp->next;
        }
        return res;
    }
};