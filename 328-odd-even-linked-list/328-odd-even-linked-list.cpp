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
    ListNode* oddEvenList(ListNode* head) {
//         if(!head||!head->next||!head->next->next)
//             return head;
//         ListNode* oh=head;
//         ListNode* eh=head->next;
//         ListNode* curr=head->next->next;
//         int count=0;
//         ListNode* even=eh;
//         ListNode* odd=oh;
//         while(curr){
//             count++;
//             if(count%2){
//                 odd->next=curr;
//                 odd=odd->next;
//             }
//             else{
//                 even->next=curr;
//                 even=even->next;
//             }
//             curr=curr->next;
//         }
//         odd->next=eh;
//         even->next=NULL;
//         return head;
//         solution 1 end
        if(!head||!head->next||!head->next->next)
             return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* eh=head->next;
        
        while(odd->next&&even->next){
            odd->next=even->next;
            even->next=odd->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=eh;
        return head;
             
    }
};