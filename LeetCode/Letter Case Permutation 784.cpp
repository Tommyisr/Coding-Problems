class Solution {
public:
    vector<string> res;
    
    
    void rec(string& s, int index, int size){
        
        if(index == size) {
            res.push_back(s);
            return;
        }
        
        if(s[index]>='0' && s[index]<='9') rec(s,index+1,size);
        else{
        
            s[index] = (char)tolower(s[index]);
            rec(s, index+1,size);
            s[index] = (char)toupper(s[index]);
            rec(s, index+1,size);
            
        }
        

        
    }
    
    vector<string> letterCasePermutation(string s) {
        

        rec(s,0,s.size());
        
        return res;
        
    }
};


       
