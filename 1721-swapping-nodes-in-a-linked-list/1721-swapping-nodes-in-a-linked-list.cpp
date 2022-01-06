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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int len=0;
        while(temp){
         len++;
          temp=temp->next;  
        }
        temp=head;
        int x=len-k+1;
        ListNode* abc;
        ListNode* xyz;
        while(temp){
            if(x==1){
                abc=temp;
            }
            if(k==1){
                xyz=temp;
            }
            x--;
            k--;
            temp=temp->next;
        }
        int c=abc->val;
        abc->val=xyz->val;
        xyz->val=c;
        
        return head;
    }
};