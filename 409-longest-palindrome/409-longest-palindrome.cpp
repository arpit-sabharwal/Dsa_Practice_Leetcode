class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        int maxi=0;
        
        for(auto it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }
            else{
            maxi=1;
                ans+=(it.second-1);
            }
        }
        return ans+maxi;
    }
};