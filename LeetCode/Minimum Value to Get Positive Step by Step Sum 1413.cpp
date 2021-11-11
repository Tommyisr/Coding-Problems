class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        
        int sum = 0;
        
        for(int i = nums.size()-1; i>=0 ; i--){

            sum += nums[i];
            if(sum >= 1) sum = 0;
        
        }
        
        return 1-sum;
        

    }
};
