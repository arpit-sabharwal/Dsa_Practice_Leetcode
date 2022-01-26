class Solution {
public:
    
    bool dfs(vector<int>&vis,vector<int>adj[],int src,stack<int>&s,vector<int>&dfss){
        dfss[src]=1;
        vis[src]=1;
        for(auto it:adj[src]){
            if(!vis[it]){
             if (dfs(vis,adj,it,s,dfss))
                 return true;
            }
            else if(dfss[it]==1)
                return true;
        }
        dfss[src]=0;
        s.push(src);   
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans;
        vector<int>adj[numCourses];
        vector<int>vis(numCourses,0);
        vector<int>dfss(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
            stack<int>s;
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(vis,adj,i,s,dfss))
                    return ans;
            }
        }
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }
            
        
        return ans;
    }
    
};