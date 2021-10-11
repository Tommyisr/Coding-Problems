class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size() == 1) return nums[0];
        
        
        int curr = nums[0];
        int max = curr;
        for(int i = 1; i<nums.size(); i++){
            
            curr += nums[i];
            if(nums[i] > curr) curr = nums[i];
            if(curr > max) max = curr;
            
        }
        
        return max;
        
    }
};
