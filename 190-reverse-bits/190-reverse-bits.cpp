class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        stack<int>s;
        int i=0;
        while(i<32){
            s.push(n%2);
            n/=2;
            i++;
        }
        i=0;
        uint32_t x=0;
        while(i<32){
            int a=s.top();
            s.pop();
            x+=((a)*pow(2,i++));
        }
        return x;
    }
};