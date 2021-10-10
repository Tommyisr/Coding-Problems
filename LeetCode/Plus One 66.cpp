class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        for(int i = digits.size()-1; i>=0; i--){
            
            if(digits[i] == 9){
                digits[i] = 0;
            }
            
            else {
                digits[i]++;
                return digits;
            }
            
        }
        
        if(digits[0] == 0){
            digits[0] = 1;
            digits.push_back(0);
        }
        
        return digits;
        
        // working solution
//         int overflow = 0;
        
//         int size = digits.size();
        
//         if(digits[size-1] == 9){
//             overflow++;
//             digits[size-1] = 0;
//         }
        
//         else{
//             digits[size-1]++;
//             return digits;
//         }

//         vector<int> res;

//         for(int i = size-2; i>=0 && overflow>0; i--){
            
//             if(overflow){
//                 overflow--;
//                 if(digits[i] == 9) {
//                     digits[i] = 0;
//                     overflow++;
//                 }
//                 else digits[i]++;
//             }       
//         }
        
        
//             if(overflow) res.push_back(1);
//             for(int i = 0; i<size; i++) res.push_back(digits[i]);
            
            
//         return res;
        
    }
};
