/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
       vector<vector<int>>ans;
        
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int>arr;
            while(sz--){
            TreeNode* temp=q.front();
                arr.push_back(temp->val);
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            }
            ans.push_back(arr);
        }
        return ans[ans.size()-1][0]; 
    }
};