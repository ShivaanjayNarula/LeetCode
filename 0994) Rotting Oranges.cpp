class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 2)
                {
                    dfs(grid, i, j, 2);
                }
            }
        }
        int ans = 0;
        // for(int i = 0; i < m; i++)
        // {
        //     for(int j = 0; j < n; j++)
        //     {
        //         cout << grid[i][j] << " ";
        //     }
        // }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                {
                    return -1;
                }
                ans = max(ans, grid[i][j]);
            }
        }
        return ans > 2 ? ans-2 : 0;
        
    }
    void dfs(vector<vector<int>> &grid, int i, int j, int time)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 || (grid[i][j] >= 2 && grid[i][j] < time))
        {
            return;
        }
        grid[i][j] = time;
        dfs(grid, i-1, j, time+1);
        dfs(grid, i+1, j, time+1);
        dfs(grid, i, j-1, time+1);
        dfs(grid, i, j+1, time+1);
    }
};
