class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //the trick is to first transpose the matrix and then reverse its columns;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n/2; j++){
                swap(matrix[i][j], matrix[i][m-j-1]);
            }
        }
    }
};
