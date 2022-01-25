class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int>temp(n,0);
        for(int i=0;i<edges.size();i++){
            temp[edges[i][1]]++;
        }
        for(int i=0;i<n;i++){
            if(!temp[i])
                ans.push_back(i);
        }
        return ans;
    }
};