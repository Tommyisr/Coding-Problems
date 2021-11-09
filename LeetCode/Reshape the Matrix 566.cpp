class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if(r*c != mat.size()*mat[0].size()) return mat;
        
        int oldc = mat[0].size();
        
        vector<vector<int>> ans(r, vector<int>(c));
        
        for(int i = 0; i < r*c; i++){
            int temp = mat[i/oldc][i%oldc];
            ans[i/c][i%c] = temp;
        }
        
        return ans;
    }
};
