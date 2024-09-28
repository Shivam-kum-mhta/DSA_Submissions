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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
          ListNode* fasttemp =new ListNode(-1);
          fasttemp->next=head;
            ListNode* slowtemp=fasttemp;
            while(fasttemp!=NULL && fasttemp->next!=NULL && fasttemp->next->next!=NULL){
                slowtemp=slowtemp->next;
                fasttemp=fasttemp->next->next;
            }
            slowtemp->next=slowtemp->next->next;
            return head;
    }
};