class Solution {
public:
    int isWordinBoard(vector<vector<char>>& board, int i, int j, string word, int index, vector<vector<int>>& visited){
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || visited[i][j]
          ||  board[i][j] != word[index]) return 0;
        
        visited[i][j] = 1;

        if(index == word.size()-1) return 1;
        
        int left = isWordinBoard(board, i, j-1, word, index+1, visited);
        int right = isWordinBoard(board, i, j+1, word, index+1, visited);
        int top = isWordinBoard(board, i+1, j, word, index+1, visited);
        int down = isWordinBoard(board, i-1, j, word, index+1, visited);
        
        visited[i][j] = 0;

        
        return left || right || top || down;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
        vector<string> ans;
        for(int i = 0; i<words.size(); i++){
            
            for(int k = 0; k<board.size(); k++){
                for(int l = 0; l<board[0].size(); l++){
                    
                        string temp = words[i];
                        reverse(temp.begin(), temp.end());
                    
                    if(board[k][l] == temp[0]){
                        vector<vector<int>> visited(board.size(),vector<int>(board[0].size(),0));
                        
                        
                    
                        if(isWordinBoard(board,k,l,temp,0,visited)) {
                        ans.push_back(words[i]);
                            k = board.size();
                            l = board[0].size();
            }
                    }
                    
                }
            }
            
        }
        
        return ans;
        
    }
};
