class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        // Use the grid itself for DP to save space
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0) {
                    continue;  // Starting point
                }
                else if(i == 0) {
                    grid[i][j] += grid[i][j-1];  // Can only come from left
                }
                else if(j == 0) {
                    grid[i][j] += grid[i-1][j];  // Can only come from top
                }
                else {
                    grid[i][j] += min(grid[i-1][j], grid[i][j-1]);  // Min of top and left
                }
            }
        }
        
        return grid[m-1][n-1];
    }
};
