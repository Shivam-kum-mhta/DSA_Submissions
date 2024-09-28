/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headB;
        while(temp->next!=NULL){ temp=temp->next;}
        temp->next=headB;
        ListNode* fast=headA;
        ListNode* slow=headA;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) {
                fast=headA;
                while(fast!=slow){
                    slow=slow->next;
                    fast=fast->next;
                }
                temp->next=NULL;
                return fast;
            }
        }

        temp->next=NULL;
        return  NULL;
    }
};