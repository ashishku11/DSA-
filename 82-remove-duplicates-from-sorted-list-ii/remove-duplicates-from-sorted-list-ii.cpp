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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* a = dummy;
        ListNode* b = head;
        while(b!=NULL){
            if(b->next!=NULL && b->val == b->next->val){
                int value = b->val;
            
                while(b!=NULL && b->val == value){
                    b = b->next;
                }
                a->next = b;
            }
            else {
                a=b;
                b=b->next;
                //if(b!=NULL){b=b->next;}
            }
        }
        return dummy->next;
        
    }
};