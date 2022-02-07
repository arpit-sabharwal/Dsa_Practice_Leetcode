class Solution {
public:
    char findTheDifference(string s, string t) {
       map<char,int>mp;
        map<char,int>mp1;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            mp1[t[j]]++;
        }
        char ans;
        for(auto it:mp1){
            if(mp[it.first]!=it.second){
                ans=it.first;
            }
        }
        return ans;
    }
};