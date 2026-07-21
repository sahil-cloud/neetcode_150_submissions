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
    ListNode* mergeTwoLists(ListNode* p1, ListNode* p2) {
        ListNode* tmp = new ListNode(-1);
        ListNode* head = tmp;
        while(p1 != NULL && p2 != NULL){
            if(p1->val <= p2->val){
                tmp->next = p1;
                tmp = tmp->next;
                p1=p1->next;
            }else{
                tmp->next = p2;
                tmp = tmp->next;
                p2=p2->next;
            }
        }
        while(p1 != NULL){
            tmp->next = p1;
            tmp = tmp->next;
            p1=p1->next;
        }
        while(p2 != NULL){
            tmp->next = p2;
            tmp = tmp->next;
            p2=p2->next;
        }
        return head->next;
    }
};
