class Solution {
public:
    string reverseWords(string s) {
        
        int start = 0;
        int end = 0;
        int index = 0;
        
        for(int i = 0; i<s.size(); i++){
            
            
            if(i == s.size()-1 || s[i+1] == ' '){
                end = i;
                while(start < end){
                    char c = s[end];
                    s[end] = s[start];
                    s[start] = c;
                    start++;
                    end--;
                }
                start = i+2;
            }
            
            //working solution
//             if(s[i] == ' '){
//                 end = i - 1;
//                 while(start < end){
//                     char c = s[end];
//                     s[end] = s[start];
//                     s[start] = c;
//                     start++;
//                     end--;
//                 }
//                 start = i+1;
                
//             }
//             else if(i == s.size()-1){
//                 end = i;
//                 while(start < end){
//                     char c = s[end];
//                     s[end] = s[start];
//                     s[start] = c;
//                     start++;
//                     end--;
//                 }
//             }
            
        }
        
        
        return s;
        
    }
};
