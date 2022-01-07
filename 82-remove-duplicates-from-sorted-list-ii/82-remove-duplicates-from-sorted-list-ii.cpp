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
    ListNode* deleteDuplicates(ListNode* head) {
        // if(!head||!head->next)
        //     return head;
        // ListNode* temp=head;//->next;
        // ListNode* prev=head;
        // ListNode* next=head->next;
        map<int,int>mp;
        ListNode* temp=head;
        while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        int x=0;
        ListNode* prev=NULL;
        while(temp){
            if(!x){
                if(mp[temp->val]==1){
                    x++;
                    head=temp;
                    prev=temp;
                }
                
            }
            else{
                if(mp[temp->val]==1){
                    prev->next=temp;
                    prev=temp;
                }
            }
            temp=temp->next;
        }
        if(prev)
            prev->next=NULL;
        if(!x)
            head=NULL;
        return head;
    }
};