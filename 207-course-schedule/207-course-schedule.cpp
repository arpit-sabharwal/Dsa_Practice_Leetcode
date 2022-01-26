class Solution {
public:
    bool checkcyc(vector<int>&vis,vector<int>adj[],int src,vector<int>&dfss){
        vis[src]=1;
        dfss[src]=1;
        for(auto it:adj[src]){
            if(!vis[it]){
                if(checkcyc(vis,adj,it,dfss))
                    return true;
            }
            else if(dfss[it]==1)
                return true;
        }
        dfss[src]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        vector<int>vis(numCourses,0);
        vector<int>dfss(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(checkcyc(vis,adj,i,dfss))
                    return false;
            }
        }
        return true;
    }
};