// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    bool check(vector<int>vis){
        for(auto it:vis){
            if(!it)
            return false;
        }
        return true;
    }
    void bfs(int s,vector<int>&vis,vector<int>adj[]){
        queue<int>q;
        q.push(s);
        vis[s]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
                for(auto it:adj[node]){
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it]=1;
                    }
                }
        }
    }
    
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    int ans=-1;
	    
	    
	    for(int i=0;i<V;i++){
	        vector<int>vis(V,0);
	        bfs(i,vis,adj);
	        if(check(vis))
	        {
	            ans=i;
	            break;
	        }
	    }
	    
	    return ans;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends