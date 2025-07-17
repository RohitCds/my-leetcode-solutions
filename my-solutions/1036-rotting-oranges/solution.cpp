class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue <pair<pair<int,int>, int>> q;
        int minutes = 0;
        int fresh = 0;
        for (int i = 0; i<n; i++){
            for (int j = 0;j<m; j++){
                if (grid[i][j]==2){
                    q.push({{i, j}, minutes});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        vector<vector<int>> direction = {{0,-1}, {-1,0}, {0,1}, {1,0}};
        while(!q.empty()){
            pair<pair<int, int>, int> front = q.front();
            int r = front.first.first;
            int c = front.first.second;
            int b = front.second;
            q.pop();
            for (int k = 0; k<4;k++) {
                int nr = r+direction[k][0];
                int nc = c+direction[k][1];
                if(nr>=0 && nr < n && nc>=0 && nc< m && grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    q.push({{nr, nc}, b+1});
                    fresh--;
                }
            }
            if(b!=minutes){
                minutes = b;
            }
        }
        return (fresh == 0)? minutes:-1;
    }
};




