class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        
        int indexmin = 0;
        int profit = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] < prices[indexmin]) indexmin = i;
                    else if(prices[i]-prices[indexmin] > profit) profit = prices[i]-prices[indexmin];

        }
        
    
        return profit;
    
    }
};
