class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count=1;
        int maj_ind=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[maj_ind]){
                count++;
            }
            else
                count--;
            if(count==0){
                maj_ind=i;
                count=1;
            }
        }
        return nums[maj_ind];
        
    }
    
};