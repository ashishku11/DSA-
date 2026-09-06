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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* TempA = list1;
        ListNode* TempB = list2;
        ListNode* c = new ListNode(100);
        ListNode* TempC = c;
        while(TempA!=NULL && TempB!=NULL){
            if(TempA->val <= TempB->val){
                TempC->next = TempA;
                TempA = TempA->next;
                TempC = TempC->next;
            }
            else {
                TempC->next = TempB;
                TempB = TempB->next;
                TempC = TempC->next;
            }
        }
        if(TempA == NULL) TempC->next = TempB;
        else TempC->next = TempA;
        return c->next;
        
    }
};