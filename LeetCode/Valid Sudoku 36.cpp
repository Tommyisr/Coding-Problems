class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        
        for(int i = 0; i<board.size(); i++){
            vector<int> test(10,0);
            for(int j = 0; j<board[0].size(); j++){
                
                if(board[i][j]>'0' && board[i][j]<='9'){
                   if(test[board[i][j]-'0']>0) return false;
                    else test[board[i][j]-'0']++; 
                }
                
            }
        }
        
        for(int j = 0; j<board[0].size(); j++){
            vector<int> test(10,0);
            for(int i = 0; i<board.size(); i++){
                
                if(board[i][j]>'0' && board[i][j]<='9'){
                   if(test[board[i][j]-'0']>0) {
                       return false;
                   }
                    else test[board[i][j]-'0']++; 
                }
                
            }
        }
        
        int start1 = 0;
        int start2 = 0;
        int maxi = 0;
        int maxj = 0;
        for(int s = 0; s < 9; s++){
            
            maxi = start1+3;
            maxj = start2+3;
            vector<int> test(10,0);
            for(int i = start1; i<maxi; i++){
                for(int j = start2; j<maxj; j++){

                    if(board[i][j]>'0' && board[i][j]<='9'){
                   if(test[board[i][j]-'0']>0) return false;
                    else test[board[i][j]-'0']++; 
                }

                }

            }
            start2+=3;
            if(start2>8) {
                start2 = 0;
                start1+=3;
            }
            
        }
        
        
        return true;
    }
};
