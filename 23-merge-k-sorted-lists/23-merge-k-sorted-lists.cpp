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
    ListNode* mergeTwo(ListNode* a, ListNode* b){
        if(!a)
            return b;
        if(!b) return a;
        ListNode* head=NULL;
        if(a->val<b->val){
            head=a;
            head->next=mergeTwo(a->next,b);
        }
        else{
            head=b;
            head->next=mergeTwo(a,b->next);
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     
        if(lists.size()==0)
            return NULL;
        else if(lists.size()==1)
            return lists[0];
     ListNode * ans=lists[0];
        for(int i=1;i<lists.size();i++){
            ans=mergeTwo(ans,lists[i]);
        }
        return ans;
    }
};