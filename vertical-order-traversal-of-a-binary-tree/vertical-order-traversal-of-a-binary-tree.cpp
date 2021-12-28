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
   
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>>mp;
        queue<pair<TreeNode* ,int>>q;int d=0;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            
            while(sz--){
            TreeNode* temp=q.front().first;
            
            int height=q.front().second;
            q.pop();
            mp[height].push_back({d,temp->val});
            if(temp->left)
                q.push({temp->left,height-1});
             if(temp->right)
                q.push({temp->right,height+1});
            
        }
        d++;
        }
        
        
        for(auto &it:mp){
            sort(it.second.begin(),it.second.end());
        }
        vector<vector<int>>answer;
        for(auto it:mp){
            vector<int>ans;
            for(int i=0;i<it.second.size();i++){
                ans.push_back(it.second[i].second);
            }
            answer.push_back(ans);
        }
        return answer;
    }
};