class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        vector<int>nums(n+1);
        nums[0]=0;
        nums[1]=1;
        
        int maxi=1;
        for(int i=2;i<=n;i++){
            if(i%2){
                nums[i]=nums[i/2]+nums[(i/2)+1];
            }
            else{
                nums[i]=nums[i/2];
            }
            maxi=max(maxi,nums[i]);
        }
     return maxi;   
    }
};