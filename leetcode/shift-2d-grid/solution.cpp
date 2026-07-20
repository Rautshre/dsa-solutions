class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        k = k%(m*n);
        int ind = (m*n - k)% (m*n);
        int x = ind/n;
        int y = ind%n;
        vector<vector<int>>ans(m, vector<int>(n, -1));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = grid[x][y];
                if(y==n-1){
                    x = (x+1)%m;
                    y = 0;
                }
                else{
                    y++;
                }
            }
        }
        return ans;
    }
};