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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* low = new ListNode(100);
        ListNode* high = new ListNode(100);
        ListNode* tl =  low;
        ListNode* th = high;
        ListNode* t = head;
        int index = 1;
        while(t!=NULL){
            //int index = 1;
            if(index%2!= 0){ //odd
                tl->next = t;
                t = t->next;
                tl = tl->next;
            }
            else { //t->val%2 == 0 even
                th->next = t;
                t = t->next;
                th = th->next;
            }
            index++;
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