class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                {
                    int check = dfs(grid, i, j);
                    ans = max(check, ans);
                }
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        int ans = 1;
        int m = grid.size();
        int n = grid[0].size();
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
        {
            return 0;
        }
        grid[i][j] = 0;
        ans += dfs(grid, i-1, j);
        ans += dfs(grid, i+1, j);
        ans += dfs(grid, i, j-1);
        ans += dfs(grid, i, j+1);
        return ans;
    }
};
