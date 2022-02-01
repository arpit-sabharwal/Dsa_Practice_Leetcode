class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy,sell,profit;
        buy=sell=prices[0];
        profit=0;
        
        
        for(int i=1;i<prices.size();i++){
             if(buy>prices[i]){
                buy=sell=prices[i];
            }
            if(prices[i]>sell){
                sell=prices[i];
            }
           
            profit=max(profit,sell-buy);
        }
        return profit;
    }
};