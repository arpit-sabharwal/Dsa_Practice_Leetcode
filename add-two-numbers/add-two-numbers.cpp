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
    
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        
       
        int carry=0,sum=0;
        ListNode* res=NULL;
        ListNode* temp;
        ListNode* curr=NULL;
        while(first||second)
        {
            sum=(first?first->val:0)+(second?second->val:0)+carry;
            carry=(sum>=10)?1:0;
            sum%=10;
            temp=new ListNode(sum);
            if(!res)
                res=temp;
            else
                curr->next=temp;
            curr=temp;
            if(first)
            first=first->next;
            if(second)
            second=second->next;
        }
        if(carry)
        {
            temp=new ListNode(carry);
            curr->next=temp;
            curr=temp;
        }
        
        return res;
        
        /*
        
        
        l1=reverse(l1);
        l1=reverse(l2);
        int carry=0,sum=0;
        ListNode* temp;
        ListNode* curr=NULL;
        ListNode* res=NULL;
        while(l1||l2)
        {
            sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
            carry=(sum>=10)?1:0;
            temp=new ListNode(sum%10);
            if(!res)
                res=temp;
            else
                curr->next=temp;
            curr=temp;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
            
        }
        if(carry)
        {
            temp=new ListNode(carry);
            curr->next=temp;
            curr=temp;
        }
        
        res=reverse(res);
        return res;*/
    }
};