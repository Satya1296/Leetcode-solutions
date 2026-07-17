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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            return head->next;
        }
        //cout<<cnt<<endl;
        int k=cnt-n; //5-2 =3
        ListNode *t=head;
        for(int i=1;i<k;i++){
            t=t->next;
        }
        t->next=t->next->next;
        return head;
    }
};