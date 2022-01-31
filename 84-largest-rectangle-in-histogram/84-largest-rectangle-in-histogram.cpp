class Solution {
public:
    void nsel(vector<int>heights,vector<int>&l){
        int n=heights.size();
        stack<pair<int,int>>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&(s.top().first>=heights[i]))
                s.pop();
            if(s.empty()){
                l.push_back(-1);
            }
            else{
                l.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        
    }
    
        void nser(vector<int>heights,vector<int>&r){
        int n=heights.size();
        stack<pair<int,int>>s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&(s.top().first>=heights[i]))
                s.pop();
            if(s.empty()){
                r.push_back(n);
            }
            else{
                r.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
            reverse(r.begin(),r.end());
        
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int>l;
        vector<int>r;
        nser(heights,r);
        nsel(heights,l);
        int ans=0;
        for(int i=0;i<heights.size();i++){
            ans=max(ans,(heights[i]*(r[i]-l[i]-1)));
        }
        return ans;
    }
};