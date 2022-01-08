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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head)
            return head;
        if(!head->next){
            head=NULL;
            return head;
        }
        if(!head->next->next){
            head->next=NULL;
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=head;
        while(fast&&fast->next){
            prev=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        prev->next=slow->next;
        return head;
    }
};