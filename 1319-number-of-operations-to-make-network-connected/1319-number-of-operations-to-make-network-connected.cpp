class Solution {
public:
    void dfs(vector<int>&vis,vector<int>adj[],int i){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it])
            dfs(vis,adj,it);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        vector<int>adj[n];
        for(int i=0;i<connections.size();i++){
           adj[connections[i][1]].push_back(connections[i][0]);
                adj[connections[i][0]].push_back(connections[i][1]);
        }
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(vis,adj,i);
                count++;
            }
        }
        
            return count-1;
        
    }
};