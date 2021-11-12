class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> hash;
        
        for(int i = 0; i < magazine.size(); i++){
            
            if(hash.count(magazine[i]) == 0) hash[magazine[i]] = 1;
            else hash[magazine[i]]++;
        }
        
        for(int i = 0; i < ransomNote.size(); i++){
            if(hash.count(ransomNote[i]) == 0 || hash[ransomNote[i]] == 0) return false;
            else hash[ransomNote[i]]--;
        }
        
        
        return true;
    }
};
