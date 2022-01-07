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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* prev=head;
        vector<ListNode* >ans;
        ListNode* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        temp=head;
        
        if(len<=k){
            while(temp&&k>0){
                prev=temp;
                ans.push_back(temp);
                temp=temp->next;
                prev->next=NULL;
                k--;
            }
            while(k){
                k--;
                ans.push_back(NULL);
            }
        }
        else{
            int extra=len%k;
            int parts=len/k;
            while(temp&&extra&&k){
                int x=parts+1;
                ans.push_back(temp);
                while(temp&&x>0){
                    prev=temp;
                    x--;
                    temp=temp->next;
                }
                prev->next=NULL;
                extra--;
                k--;
            }
            while(temp&&k){
                int x=parts;
                ans.push_back(temp);
                while(temp&&x>0){
                    prev=temp;
                    x--;
                    temp=temp->next;
                }
                k--;
                prev->next=NULL;
            }
            
        }
        return ans;
    }
};