class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=-1;
        int mini=1001;
        for(auto it:nums){
            maxi=max(maxi,it);
            mini=min(mini,it);
        }
        return __gcd(maxi,mini);
    }
};