class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size() == 0) return 0;
        vector<int> arr(256,0);
        int i = 0;
        int j = 0;
        int curr = 0;
        int max = 0;
       
        
        for(j = 0; j < s.size(); j++){
            if(arr[s[j]] == 0) {
                arr[s[j]]++;
                curr++;
                if(curr > max) {
                    max = curr;
                }
            }
            else if(arr[s[j]] > 0){
                while(i < j && s[i] != s[j]){
                    arr[s[i]]--;
                    i++;
                    curr--;
                }
                i++;
            }
            
        }
        
      
        
        return max;
    }
};
