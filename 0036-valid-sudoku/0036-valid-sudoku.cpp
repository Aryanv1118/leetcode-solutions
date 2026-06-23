class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> box(9);
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                char num = board[i][j];
                int k = 3*(i/3)+j/3;
                if(num == '.'){
                    continue;
                }
                if(rows[i].count(num)){
                    return false;
                }
                if(cols[j].count(num)){
                    return false;
                }
                if(box[k].count(num)){
                    return false;
                }
                rows[i].insert(num);
                cols[j].insert(num);
                box[k].insert(num);
            }
        }
        return true;
    }
};