class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int halfcols = 0;
        if(cols%2==0) halfcols = cols/2;
        else halfcols = cols/2 + 1;
        int temp, temp2, temp3;
        for(int i = 0; i < halfcols; i++){
            for(int j = i; j < cols-i-1; j++){
                
                
                // 0,0 -> 0,3 matrixmatrix[i][j] -> matrix[j][cols-i-1]
                // 0,3 -> 3,3 matrix[j][cols-i-1] -> matrix[cols-i-1][cols-j-1]
                // 3,3 -> 3,0 matrix[cols-i-1][cols-j-1] -> matrix[cols-j-1][i]
                // 3,0 -> 0,0 matrix[cols-j-1][i] -> matrix[i][cols-cols+j+1-1]
                
                 temp = matrix[j][cols-i-1];
                matrix[j][cols-i-1] = matrix[i][j]; 
                
                 temp2 = matrix[cols-i-1][cols-j-1];  
                matrix[cols-i-1][cols-j-1] = temp;  
                
                 temp3 = matrix[cols-j-1][i];
                matrix[cols-j-1][i] = temp2;
                
                matrix[i][j] = temp3;
              

                
            }
        }
        
        
    }
};
