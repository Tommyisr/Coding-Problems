class Solution {
public:
    
    int rec(vector<vector<char>>& board, int i, int j, string word, int index){
        
        if(index == word.size()) return 1;

        if(i<0 || j>=board[0].size() || j<0 || i>=board.size()) return 0;
        
        int top=0;
        int down=0;
        int left=0;
        int right=0;
        char temp;
        if(board[i][j] == word[index] && board[i][j] != '.'){
            
            temp = board[i][j];
            board[i][j] = '.'; // marking it visited
            
            top = rec(board,  i-1, j, word, index+1);
            down = rec(board,  i+1, j, word, index+1);
            left = rec(board,  i, j-1, word, index+1);
            right = rec(board,  i, j+1, word, index+1);
            
            if(top || down || left || right) return true;
        
            board[i][j] = temp; 
        }
        
        
        
        return false;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                
                
                
                if(board[i][j] == word[0]){
                    if(rec(board,i,j,word,0)) return true;
                }
            }
        }
        
        return false;
    }
};
