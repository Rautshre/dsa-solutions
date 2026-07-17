class Solution {
public:
    int n, m;
    vector<int>dx = {-1, 0, 1, 0};
    vector<int>dy = {0, 1, 0, -1};
    void dfs(int x, int y, vector<vector<char>> &grid, set<pair<int, int>> &vis){
         vis.insert({x, y});
         for(int d=0; d<4; d++){
            int nx = x+dx[d];
            int ny = y+dy[d];
            if(nx>=0 && nx<n && ny>=0 && ny<m && !vis.count({nx, ny}) && grid[nx][ny]=='1'){
                dfs(nx, ny, grid, vis);
            }
         }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<pair<int, int>>v;
        n = grid.size();
        m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'){
                    v.push_back({i, j});
                }
            }
        }
        int conC = 0;
        set<pair<int, int>>vis;
        for(int i=0; i<v.size(); i++){
            if(!vis.count({v[i].first, v[i].second})){
                conC++;
                dfs(v[i].first, v[i].second, grid, vis);
            }
        }
        return conC;
    }
};