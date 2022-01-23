class Solution {
public:
    bool check(int src,vector<int>&vis,vector<vector<int>>graph){
        queue<int>q;
        q.push(src);
        vis[src]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(vis[it]==-1){
                    vis[it]=1-vis[node];
                    q.push(it);
                }
                else if(vis[node]==vis[it]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>vis(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
           if(vis[i]==-1){ if(!check(i,vis,graph))
                return false;}
        }
        return true;
    }
};