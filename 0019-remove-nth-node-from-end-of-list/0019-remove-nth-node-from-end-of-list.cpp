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
        ListNode* temp =head;
        stack <ListNode* > st;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }

            if(n==st.size()) return head->next;
        while(n--){
            st.pop();
        }
        temp=st.top();
        temp->next=temp->next->next;
            return head;
    }

};