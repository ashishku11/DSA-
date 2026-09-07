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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head ==NULL || head->next==NULL || left == right) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* stop = dummy;
        for(int i=1;i<left;++i){
            stop = stop->next;
        }
        ListNode* curr = stop->next;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        ListNode* leftNode = curr; // permanent in left 
        while(left<right){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            left++;
        }
        Next = curr->next;
        curr->next = prev;
        stop->next = curr;
        leftNode->next = Next;
        
        return dummy->next;
        
    }
};