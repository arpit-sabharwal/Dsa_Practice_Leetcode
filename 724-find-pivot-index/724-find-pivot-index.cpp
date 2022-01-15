class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long sum=0;
        for(auto it:nums){
            sum+=it;
        }
        long long sum1=0;
        for(int i=0;i<nums.size();i++){
           if(sum1==sum-nums[i]){
            return i;   
           }
            else{
                sum1+=nums[i];
                sum-=nums[i];
            }
            
        }
        return -1;
        
    }
};