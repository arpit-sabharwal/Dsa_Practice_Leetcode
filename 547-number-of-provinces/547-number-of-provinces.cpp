class Solution {
public:
    
    void dfs(int i, vector<vector<int>>adj,vector<int>&vis){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>>adj(isConnected.size());
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(i!=j){
                    if(isConnected[i][j]){
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }
        }
        int n=isConnected.size();
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                count++;
            }
        }
       return count; 
    }
};