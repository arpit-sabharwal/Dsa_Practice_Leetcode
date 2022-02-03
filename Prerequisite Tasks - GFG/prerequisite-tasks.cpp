// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool dfs(vector<int>&vis,vector<int>&dfss,int src, vector<int>adj[])
{
    if(vis[src])
    return false;
    
   dfss[src]=vis[src]=1;
    for(auto it:adj[src]){
        if(!vis[it]&&dfs(vis,dfss,it,adj))
            return true;
        else if(dfss[it])
            return true;
    }
    dfss[src]=0;
    return false;
    
}

	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
        vector<int>adj[N];
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i].second].push_back(prerequisites[i].first);
        }
        vector<int>dfss(N,0);
        vector<int>vis(N,0);
        for(int i=0;i<N;i++){
            if(!vis[i]){
                if(dfs(vis,dfss,i,adj))
                return false;
            }
        }
    return true;

	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends