

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    
    int* arr = (int*)malloc(sizeof(int)*numsSize);
    int index = 0;
    *returnSize = numsSize;
    
    for(int i = 0; i<numsSize; i++){
        if(nums[i]<0) index = i;
    }
    
    
    for(int i=0; i<numsSize; i++){
        nums[i] *= nums[i];
    }
    
    int right = index+1;
    
    for(int i = 0; i<numsSize; i++){
        if(index>=0 && right<numsSize){
            if(nums[index]<nums[right]){
                arr[i] = nums[index];
                index--;
            }
            else {
                arr[i] = nums[right];
                right++;
            }
            }
        else if(index>=0) {
            arr[i] = nums[index];
            index--;
        }
        else {
            arr[i] = nums[right];
            right++;
        }
        
    }
    // for(int i =0; i<numsSize; i++) printf("%d ",arr[i]);
    
    return arr;
}
