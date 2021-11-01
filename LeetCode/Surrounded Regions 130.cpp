class Solution {
public:
    
    bool rec(vector<vector<char>>& board, int i, int j, queue<pair<int,int>>& q){
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) return true;
        
                if(board[i][j] == 'X' || board[i][j] == 'a') return true;

        
        if(board[i][j] == 'O') {
            if(i<=0 || j<=0 || i>=board.size()-1 || j>=board[0].size()-1) return false;
            else {
                q.push({i,j});
            board[i][j] = 'a';
            }
            
            
        }
        
        
        bool left = rec(board, i, j-1, q);
        bool right = rec(board, i, j+1, q);
        bool top = rec(board, i-1, j, q);
        bool down = rec(board, i+1, j, q);

        return left && right && top && down;
        
    }
    
    
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>> q;
        
        for(int i = 1; i<board.size()-1; i++){
            for(int j = 1; j<board[0].size()-1; j++){
                
                
                if(board[i][j] == 'O'){
                    
                    bool res = rec(board,i,j,q);
                    
                        while(!q.empty()){
                                                    

                            pair<int,int> p = q.front();
                            q.pop();
                            if(res) board[p.first][p.second] = 'X';
                            else board[p.first][p.second] = 'O'; 

                            
                        }
                    }
                    
                        
                    
                }
                
            }
        
        
        
    }
};
