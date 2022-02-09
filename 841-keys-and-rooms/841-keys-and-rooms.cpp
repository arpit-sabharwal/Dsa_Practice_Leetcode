class Solution {
public:
    void dfs(vector<int>&vis,vector<vector<int>>rooms,int i){
        vis[i]=1;
        for(auto it:rooms[i]){
            if(!vis[it]){
                dfs(vis,rooms,it);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>vis(rooms.size(),0);
        dfs(vis,rooms,0);
        for(int i=0;i<vis.size();i++){
            if(!vis[i])
                return false;
        }
        return true;
    }
};