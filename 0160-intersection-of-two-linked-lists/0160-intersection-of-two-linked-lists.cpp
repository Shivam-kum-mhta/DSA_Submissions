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
        unordered_map <ListNode* , int> map;
        ListNode* L1=headA;
        ListNode* L2=headB;
        while(L1!=NULL || L2!=NULL){
            if(L1!=NULL) {if(map.find(L1)!=map.end()) return map.find(L1)->first; else {map[L1]++; L1=L1->next;}
            }
            if(L2!=NULL) {if(map.find(L2)!=map.end()) return map.find(L2)->first; else {map[L2]++; L2=L2->next;}
            }
        }
        return NULL;
    }
};