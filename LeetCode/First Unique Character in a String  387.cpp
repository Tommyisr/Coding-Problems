class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> hash;
        int index = -1;
        
        for(int i = s.size()-1; i>=0; i--){
            if(hash.count(s[i]) == 0){
                hash[s[i]] = 1;
            }    
            else hash[s[i]]++;
        }
        
                for(int i = s.size()-1; i>=0; i--){
                    if(hash[s[i]] == 1) index = i;
                }
        
        return index;
        
        
    }
};
