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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;
        while(second){
            ListNode* nextnode = second->next;
            second->next = prev;
            prev = second; 
            second = nextnode;
        }
        while(prev){
            ListNode* tempnext = temp->next;
            ListNode* prevnext = prev->next;
            temp->next = prev;
            prev->next = tempnext;
            temp = tempnext;
            prev = prevnext;
        }
    }
};
