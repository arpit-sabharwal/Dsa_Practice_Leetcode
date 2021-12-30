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
    bool isSymmetric(TreeNode* root){
        return (root==NULL||isSymmetrichelp(root->left,root->right));
    }
    bool isSymmetrichelp(TreeNode* left,TreeNode* right) {
        if(!(left)||!(right)){
            return (left==right);
        }
        return (left->val==right->val)&&isSymmetrichelp(left->left,right->right)&&isSymmetrichelp(left->right,right->left);
    }
};