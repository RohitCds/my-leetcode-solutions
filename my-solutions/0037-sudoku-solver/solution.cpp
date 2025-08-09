class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char ch) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == ch) return false; // check column
            if (board[row][i] == ch) return false; // check row
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == ch) return false; // check block
        }
        return true;
    }

    bool solve(int r, int c, vector<vector<char>>& board) {
        if (r == 9) return true; // finished board

        int nextR = (c == 8) ? r + 1 : r;
        int nextC = (c == 8) ? 0 : c + 1;

        if (board[r][c] != '.') {
            return solve(nextR, nextC, board);
        }

        for (char ch = '1'; ch <= '9'; ch++) {
            if (isValid(board, r, c, ch)) {
                board[r][c] = ch;
                if (solve(nextR, nextC, board)) return true;
                board[r][c] = '.'; // backtrack
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(0, 0, board);
    }
};

