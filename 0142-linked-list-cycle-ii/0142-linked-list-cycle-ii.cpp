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
        unordered_map<ListNode*, int> map;
        ListNode* temp=head;
        while(temp!=NULL){
            auto it=map.find(temp);
            if(it==map.end())
            map[temp]++;
            else return it->first;
            temp=temp->next;
        }
        return NULL;
    }
};