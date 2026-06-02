class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i<9; i++){
            unordered_set<char> seen;
            for(int j = 0; j<9; j++){
                if(board[i][j]=='.') continue;
                if(seen.count(board[i][j])) return false;
                seen.insert(board[i][j]);
            }
        }
        for(int j = 0; j<9; j++){
            unordered_set<char> seen;
            for(int i = 0; i<9; i++){
                if(board[i][j]=='.') continue;
                if(seen.count(board[i][j])) return false;
                seen.insert(board[i][j]);
            }
        }
        for(int m = 0; m<3; m++){
            for(int k = 0; k<3; k++){
            unordered_set<char> seen;
                for(int i = 3*m; i<3*m+3; i++){
                    for(int j = 3*k; j<3*k+3; j++){
                        if(board[i][j]=='.') continue;
                        if(seen.count(board[i][j])) return false;
                        seen.insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
