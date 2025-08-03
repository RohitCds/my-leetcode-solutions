class Solution {
public:
    int uniquePaths(int m, int n) {
        // Use vectors instead of arrays for easier handling
        vector<int> prev(n, 0);
        
        for(int i = 0; i < m; i++){
            vector<int> temp(n, 0);
            
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0){
                    temp[j] = 1;  // Starting position
                }
                else if(i == 0){
                    temp[j] = temp[j-1];  // First row: can only come from left
                }
                else if(j == 0){
                    temp[j] = prev[j];    // First col: can only come from above
                }
                else{
                    temp[j] = prev[j] + temp[j-1];  // Can come from above or left
                }
            }
            prev = temp;  // Copy temp to prev
        }
        
        return prev[n-1];  // Return last element of the last row
    }
};
