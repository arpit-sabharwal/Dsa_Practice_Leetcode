class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int maxlen=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            sum += nums[i]==1?1:-1;
            if(sum==0){
                maxlen=max(maxlen,i+1);
            }
            else if(mp.find(sum)!=mp.end()){
                maxlen=max(maxlen,i-mp[sum]);
            }
            else
                mp[sum]=i;
        }
        return maxlen;
    }
};