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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int L=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            L++;
        }
        if(k%L==0) return head;
        k=L-k%L-1;
        temp=head;
        while(k--)
        {temp=temp->next;
        }
        ListNode* secondtemp=temp->next;
        temp->next=NULL;
        temp=secondtemp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return secondtemp;


    }
};