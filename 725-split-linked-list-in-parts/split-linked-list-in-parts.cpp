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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> arr;
        ListNode* temp = head;
        int length = 0;
        while(temp!=NULL){
            temp = temp->next;
            length++;
        }
        for(int i=0;i<k;i++){
            int partsize = length/k;
            if(i<length%k){
                partsize++;
            }
            if(partsize == 0){
                arr.push_back(NULL);
                continue;
            }
            temp = head;
            for(int j=1;j<partsize;j++){
                temp = temp->next;
            }
            arr.push_back(head);
            ListNode* nextPart = temp->next;
            temp->next = NULL;
            head = nextPart;
        }
        return arr;  
    }
};