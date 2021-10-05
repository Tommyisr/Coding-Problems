class Solution {
public:
    
//     int rec(vector<int>& arr, int n){
//         if(n == 1 || n == 0) return 1;
//         if(arr[n] != 0) return arr[n];
        
        
//         arr[n] = rec(arr, n-1) + rec(arr, n-2);
//         return arr[n];
//     }
    
    int climbStairs(int n) {
     
        // like Fibonacci
        if(n == 1) return 1;
        else if(n == 2) return 2;
        
        int prev = 1;
        int curr = 2;
        
        for(int i=3; i<n; i++){
            int temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        
        return curr+prev;
        
        
        // recursion 2 with memoization
//         vector<int> arr(n+1,0);
//         return rec(arr,n);
        
        
        // recursion 1 simple
        // if(n == 1 || n == 0) return 1;
        // return climbStairs(n-1) + climbStairs(n-2);
        
        
    }
};
