class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        long axorb = 0;
        
        for(int i = 0; i<nums.size(); i++){
            
            axorb ^= nums[i];
        }
        
        int mask = axorb & (-axorb); // 2's complement, reverse bits and adds 1 gives the rightmost set bit. example:  011 -->  101.  011 & 101 = 001
        
        
        int b = 0; // a xor (a xor b) = b
        for(int i = 0; i < nums.size(); i++){
            
            if(mask & nums[i]) b ^= nums[i];
        }
        
        
        vector<int> res;
        res.push_back(b);
        res.push_back(b^axorb);
        
        return res;
        
    }
};
