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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;

        ListNode* newhead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp =head;
        ListNode* temp2=head;
        while(temp2!=NULL && temp2->next!=NULL){
            temp=temp->next;
            temp2=temp2->next->next;
        }
        ListNode* secondhalf=reverse(temp);
        ListNode* firsthalf=head;
        while(firsthalf!=temp){
            if( firsthalf->val!=secondhalf->val){
                return false;
            }
            firsthalf=firsthalf->next;
           secondhalf=secondhalf->next;
        }
        return true;
    
    }
};