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
    ListNode *detectCycle(ListNode *head) {
        ListNode* first=head;
       ListNode* second=head;
       while(first!=NULL && first->next!=NULL){
        first=first->next->next;
        second=second->next;
        if (first == second) {
                ListNode* start = head;
                while (start != second) {
                    start = start->next;
                    second = second->next;
                }
                return start; 
            }
       }
       return NULL;
    }
};