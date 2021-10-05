

void moveZeroes(int* nums, int numsSize){

    int zero = 0;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] != 0) nums[zero++] = nums[i];
        
        // if(nums[i] == 0){
            // int k = i;
            // while(k < numsSize && nums[k] == 0) k++;
            // if(k < numsSize){
            //     int temp = nums[k];
            //     nums[k] = nums[i];
            //     nums[i] = temp;
            // }
        }
        for(int i = zero; i<numsSize; i++){
            nums[i] = 0;
        }
    
    }
    
    
