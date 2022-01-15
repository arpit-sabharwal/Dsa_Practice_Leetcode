class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
       for(auto it:nums){
           int di=(log10(it)+1);
           if(di%2==0)
               count++;
       } 
        return count;
    }
};