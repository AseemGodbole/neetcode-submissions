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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* chk = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;
        int size = 0;
        while(chk){
            chk=chk->next;
            size++;
        }
        int k = size - n;
        
        for(int i = 0; i<k; i++){
            temp = temp->next;
        }
        temp->next= temp->next->next;
        return dummy->next;

    }
};
