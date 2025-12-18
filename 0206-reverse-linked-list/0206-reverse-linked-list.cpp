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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *ptr=head; // 1
        while(ptr!=NULL){
            ListNode *ptr2=ptr->next; // 2 3 null
            ptr->next=prev; // 1 null 
            prev=ptr; // 1 2
            ptr=ptr2; //2 3
        }
        return prev;
    }
};