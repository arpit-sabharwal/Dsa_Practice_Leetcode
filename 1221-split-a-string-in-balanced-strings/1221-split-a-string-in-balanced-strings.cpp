class Solution {
public:
    int balancedStringSplit(string s) {
        int cl=0;
        int cr=0;
        int count=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')
            cl++;
            else
            cr++;
            if(cr==cl){
                cr=0;
                cl=0;
                count++;
            }
            
        }
        return count;
    }
};