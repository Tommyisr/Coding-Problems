class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int i = 1;
        
        vector<vector<int>> ans;
        
        while(numRows--){
            
        vector<int> a(i);
        a[0] = 1;
        a[a.size()-1] = 1;
            
        for(int k = 1; k < a.size()-1; k++){
            a[k] = ans[i-2][k] + ans[i-2][k-1];
        }
            ans.push_back(a);
            
            i++;
        }
        
        return ans;
    }
};
