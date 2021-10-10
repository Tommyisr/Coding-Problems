class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        if(left == 0 || ((int)log2(right))-(int)log2(left)>0) return 0;
        
        
        int res = left;
        
        for(long i = left; i<=right; i++) res &= i;
        
        
        return res;
    }
};
