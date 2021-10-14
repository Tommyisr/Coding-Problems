class Solution {
public:
    
//     bool isSquare(int x){
        
//         int a = sqrt(x);
//         if(a*a == x) return true;
//         return false;
//     }
    
    
    int numSquares(int n) {
        
        vector<int> sq;
        int x = 0;
        for(int i = 1; i<=n; i++){
            x = i*i;
            if(x <= n) sq.push_back(x);
            // if(isSquare(i)) sq.push_back(i);
        }
        
        
        vector<int> arr(n+1,n+1);
        arr[0] = 0;
        
        for(int i = 1; i<arr.size(); i++){
            for(int j = 0; j<sq.size(); j++){
                
                if(sq[j]<=i) arr[i] = min(arr[i],arr[i-sq[j]]+1);
                
            }
        }
        
        
        return arr[n];
        
    }
};
