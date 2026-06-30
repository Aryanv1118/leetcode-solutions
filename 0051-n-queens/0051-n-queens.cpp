class Solution {
public:
    bool isSafe(int row ,int col,vector<vector<char>>& board){
        for(int i = 0;i<=row;i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        for(int i = 0;i<=col;i++){
            if(board[row][i] == 'Q'){
                return false;
            }
        }
        int r = row;
        for(int c = col;c>=0 && r>=0;c--,r--){
            if(board[r][c] == 'Q'){
                return false;
            }
        }
        r = row;
        for(int c = col;c>=0 && r<board.size();c--,r++){
            if(board[r][c] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void append(vector<vector<char>>& board,vector<vector<string>>& ans){
        string row ;
        vector<string> boardrow;
        for(int i = 0;i<board.size();i++){
            row = "";
            for(int j = 0;j<board.size();j++){
                if(board[i][j] == 'Q'){
                    row += 'Q';
                }
                else{
                    row += '.';
                }
            }
            boardrow.push_back(row);
        }
        ans.push_back(boardrow);
    }
    void recur(vector<vector<char>>& board,vector<vector<string>>& ans,int col){
        if(col == board.size()){
            append(board,ans);
            return;
        }
        for(int row = 0;row<board.size();row++){
            if(isSafe(row,col,board)){
                board[row][col] = 'Q';
                recur(board,ans,col+1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<char>> board (n,vector<char>(n,'.'));
        recur(board,ans,0);
        return ans;
    }
};