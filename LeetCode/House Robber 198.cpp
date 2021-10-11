class Solution {
public:
    

    
//     int rec(vector<int>& nums, int n){
//         if(n == 0) return nums[n];
//         else if(n < 0) return 0;
        
        
//         return max(rec(nums,n-2)+nums[n], rec(nums,n-1));
        
        
        
//     }
    
    
    int rob(vector<int>& nums) {
        
        vector<int> dp(nums.size(),0);
        
        if(nums.size() == 1){
           return nums[0];
        }
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        
        for(int i = 2; i < nums.size(); i++){
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        }
        
        
        return dp[nums.size()-1];
        
        
        
        
        // return rec(nums,nums.size()-1);
        
    }
};
