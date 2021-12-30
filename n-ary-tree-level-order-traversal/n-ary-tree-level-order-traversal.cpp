/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       vector<vector<int>>ans;
        if(!root)
            return ans;
        queue<Node* >q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int>arr;
            while(sz--){
            Node* temp=q.front();
                arr.push_back(temp->val);
            q.pop();
            for(int i=0;i<temp->children.size();i++){
             q.push(temp->children[i]);   
            }    
            }
            ans.push_back(arr);
        }
        return ans;
    }
};