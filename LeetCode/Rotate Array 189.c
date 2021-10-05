

void rotate(int* nums, int numsSize, int k){

// int* arr = malloc(numsSize * sizeof(int));

    if(k==0 || k==numsSize) return nums;
    int i = 0;
    int j = numsSize-1;
    

    while(i<j){
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
        i++;
        j--;
    }
    
    i = 0;
    j = (k-1)%numsSize;
    while(i<j){
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
         i++;
        j--;
    }
    
    i = k%numsSize;
    j = numsSize -1 ;
    
   
    while(i<j){
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
         i++;
        j--;
    }
    
    
    
    
       // worked solution 
// for(int i=0; i<numsSize; i++){
    
//     if(i+k<numsSize) arr[(i+k)]=nums[i];
//     else {
        
//         arr[(i+k)%numsSize]=nums[i];
//     }
    
// }
    
    

// for(int i=0; i<numsSize; i++){
//     nums[i]=arr[i];
// }
}
