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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp3 = new ListNode(0);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* l3 = temp3;
        int sum = 0;
        int dig = 0;
        int carry = 0;
        while(temp1 && temp2){
            sum = temp1->val + temp2->val + carry;
            dig = sum%10;
            carry = sum/10;
            ListNode* next = new ListNode(dig);
            temp3->next = next;
            temp3 = next;
            temp1=temp1->next;
            temp2 = temp2->next;
        } 
        while(temp1 ){
            sum = temp1->val + carry;
            dig = sum%10;
            carry = sum/10;
            ListNode* next = new ListNode(dig);
            temp3->next = next;
            temp3 = next;
            temp1=temp1->next;
        }
        while(temp2){
            sum = temp2->val + carry;
            dig = sum%10;
            carry = sum/10;
            ListNode* next = new ListNode(dig);
            temp3->next = next;
            temp3 = next;
            temp2 = temp2->next;
        }
        if(carry){
            ListNode* next = new ListNode(carry);
            temp3->next = next;
            temp3 = next;
        }
        return l3->next;
    }
};
