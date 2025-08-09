class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string a(n, '.');
        for(int i = 0; i<n; i++){
            board[i] = a;
        }
        nQueens(0, board, ans, n);
        return ans;
    }

    bool isValid(int row, int col, vector<string>& board) {
        int n = board.size();
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
    }

    return true;
}


    void nQueens(int row, vector<string>& board, vector<vector<string>>& ans, int n) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isValid(row, col, board)) {
                board[row][col] = 'Q';
                nQueens(row + 1, board, ans, n);
                board[row][col] = '.'; 
            }
        }
    }
};

