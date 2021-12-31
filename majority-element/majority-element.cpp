class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int maxi=0;
        for(auto it:nums)
        {  mp[it]++;
        // maxi=max(maxi,mp[it]);
        }
        int ans;
        for(auto it:mp){
            if(maxi<it.second){
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
    
};