// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    int low = 1;
    int high = n;
    
    while(low <= high){
        int middle = low + (high-low)/2;
        
        if(isBadVersion(middle)) {
            if(middle-1 >= 1){
                if(!isBadVersion(middle-1)) return middle;
                else high = middle-1; 
            }
            else return middle;
        
        }
        else {
            low = middle+1;
        }
      
    }
    
    
    return -1;
    
    
}
