class Solution {
public:
    
    bool test(vector<int>& a, vector<int>& b){
        for(int i = 0; i<a.size(); i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
        vector<int> a1(26,0);
        for(int i = 0; i<s1.size(); i++) a1[s1[i]-'a']++;
        int count = 0;
        
        for(int i = 0; i < s2.size(); i++){
            if(a1[s2[i]-'a']>0){
            vector<int> a2(26,0);
            int index = i;
                while(index < s2.size() && a1[s2[index]-'a'] > 0 && count < s1.size()){
                    a2[s2[index]-'a']++;
                    index++;
                    count++;
                }
                
                if(test(a1,a2)) return true;
                count = 0;
            }
        }
        
        
        
        
        
        
        return false;
        
    }
};
