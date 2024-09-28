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
        ListNode* findmid(ListNode* l){
            ListNode* fasttemp =l;
            ListNode* slowtemp=l;
            while(fasttemp!=NULL && fasttemp->next!=NULL && fasttemp->next->next!=NULL){
                slowtemp=slowtemp->next;
                fasttemp=fasttemp->next->next;
            }
            return slowtemp;
        }

        ListNode* Merge2LL(ListNode* L1, ListNode* L2){
               ListNode* helper=new ListNode(0);
               ListNode* sendhead=helper;
         
            while(L1!=NULL && L2!=NULL){
                if(L1->val <=L2->val) {
                    helper->next=L1;
                    L1=L1->next;
                }
                else{
                    helper->next=L2;
                    L2=L2->next;
                }
                helper=helper->next;
                helper->next=NULL;
            }
            if(L1!=NULL){
                helper->next=L1;
            }
            if(L2!=NULL){
                 helper->next=L2;
            }
        
            return sendhead->next;
        }

    // void MS(ListNode* h1 , ListNode* h2){
    //     if(h1->next==NULL) return h1;
    //     if(h2->next==NULL) return h2;

    //     ListNode* left = MS(h1->next);
    //     ListNode* right = MS(h2->next);
    //     return Merge2LL(left, right);
    // }
    ListNode* sortList(ListNode* head) {
 if(!head || !head->next) return head;
        ListNode* mid=findmid(head);
        ListNode* right = sortList(mid->next);
        mid->next=NULL;
        ListNode* left = sortList(head);
        return Merge2LL(left, right);
    }
};