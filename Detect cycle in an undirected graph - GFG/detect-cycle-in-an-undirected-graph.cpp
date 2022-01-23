// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int s, int par, vector<int>& vis, vector<int>adj[]){
        vis[s]=1;
        for(auto it:adj[s]){
            if(!vis[it]){
                if(dfs(it,s,vis,adj))
                return true;
            }
            else if(it!=par)
            return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,-1,vis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends