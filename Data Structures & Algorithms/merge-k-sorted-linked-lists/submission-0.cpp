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
    ListNode* merge2lists(ListNode* list1, ListNode* list2 ){
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp3 = dummy;
        while(temp1 && temp2){
            if(temp1->val>temp2->val){
                temp3->next = temp2;
                temp2=temp2->next;
            }
            else {
                temp3->next = temp1;
                temp1= temp1->next;
            }
            temp3=temp3->next;
        }
        while(temp1){
            temp3->next = temp1;
            temp1=temp1->next;
            temp3 = temp3->next;
        }
        while(temp2){
            temp3->next = temp2;
            temp2=temp2->next;
            temp3 = temp3->next;
        }
        return dummy->next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return nullptr;
        while(n>1){
            int k = (n+1)/2;
            for(int i =0; i<n/2; i++){
                lists[i]=merge2lists(lists[i],lists[i+k]);
            }
            n = k;
        }
        return lists[0];
    }
};
