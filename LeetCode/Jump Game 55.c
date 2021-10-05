

bool canJump(int* nums, int numsSize){
    if(numsSize == 1) return true;
    
    int m = 0;
    
    for(int i = 0; i<numsSize; i++){
        
        if(i > m) return false;
        
        m = m > nums[i]+i ? m : nums[i]+i;
    }
    
    return true;
}
