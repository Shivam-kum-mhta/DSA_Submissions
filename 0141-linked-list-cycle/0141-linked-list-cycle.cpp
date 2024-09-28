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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> map;
        ListNode* temp=head;
        while(temp!=NULL){
            if(map.find(temp)==map.end())
            map[temp]++;
            else return true;
            temp=temp->next;
        }
        return false;
    }
};