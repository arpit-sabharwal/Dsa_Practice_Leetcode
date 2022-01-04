class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>>ans;
        vector<int>abc;
        for(int i=0;i<=rowIndex;i++){
            vector<int>arr(i+1);
            arr[0]=1;
            arr[i]=1;
            if(i>1){
            for(int j=1;j<i;j++){
                arr[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            }
            ans.push_back(arr);
            if(i==rowIndex)
                abc=arr;
        }
        return abc;
        
    }
};