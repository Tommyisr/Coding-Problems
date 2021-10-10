class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        
        int sum = 0;
        
        
        
        for(int i = 0; i<prices.size(); i++){
            
            if((i==0 && prices[i]<=prices[i+1]) || (i>0 && (i+1 < prices.size()) && 
        (prices[i-1] > prices[i]) && (prices[i] <= prices[i+1]))){
                
                int k = i+1;
                while(k+1 != prices.size() && prices[k]<=prices[k+1]){
                    k++;
                } 
                
                sum += prices[k]-prices[i];
                
                i = k;
                
            }
            
            
        }
        
        
        
        return sum;
    }
};
