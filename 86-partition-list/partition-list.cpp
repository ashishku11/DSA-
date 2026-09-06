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
    ListNode* partition(ListNode* head, int x) {
        ListNode* low = new ListNode(100);
        ListNode* high = new ListNode(100);
        ListNode* tl =  low;
        ListNode* th = high;
        ListNode* t = head;
        while(t!=NULL){
            if(t->val < x){
                tl->next = t;
                t = t->next;
                tl = tl->next;
            }
            else {
                th->next = t;
                t = t->next;
                th = th->next;
            }
            // if(t == NULL){
            //     tl->next = NULL;
            //     th->next = NULL;
            // }

        }
        //low = low->next;
        tl->next = high->next;
        th->next = NULL;
        return low->next;
        
    }
};