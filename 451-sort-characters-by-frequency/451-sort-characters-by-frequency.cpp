class Solution {
public:
   static bool cmp(pair<char, int>& a,
         pair<char, int>& b)
{
    return a.second > b.second;
}
    string frequencySort(string s) {
       map<char,int,greater<int>>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
         vector<pair<char, int>> A;

    for (auto& it : mp) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
        string ans="";
        for(auto it:A){
            for(int i=0;i<it.second;i++){
                ans+=it.first;
            }
        }
       
        return ans;
    }
};