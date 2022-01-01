class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int count=0;
            int j=i;
            int rmsb;
            while(j!=0){
                rmsb=j&-j;
                j-=rmsb;
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};