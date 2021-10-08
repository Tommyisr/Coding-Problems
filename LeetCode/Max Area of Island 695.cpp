class Solution {
public:
    

    
    int rec(vector<vector<int>>& grid, int i, int j,vector<vector<int>>& board ){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || board[i][j]==1 || grid[i][j]==0) return 0;
        
        board[i][j] = 1;
               
        return 1 + rec(grid,i-1,j,board) + rec(grid,i+1,j,board) + rec(grid,i,j-1,board) + rec(grid,i,j+1,board);
        
    }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = 0;
        int curr = 0;
        
        vector<vector<int>> board(grid.size(), vector<int> (grid[0].size(),0));
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1) curr = rec(grid,i,j,board);
                if(curr > max) max = curr;
            }
             
        }
        
        return max;
    }
};
