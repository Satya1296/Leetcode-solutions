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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr=new ListNode(0);
        ListNode *c=curr;
        int sum=0;
        head=head->next; // 3
        while(head!=NULL){
            if(head->val!=0){ // 
                sum+=head->val; //4 
            }
            else{
                c->next=new ListNode(sum); // 4
                c=c->next;
                sum=0;
            }
            head=head->next;
        }
        return curr->next;
    }
};