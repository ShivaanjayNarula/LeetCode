class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] > 0)
                {
                    int count = 0;
                    helper(grid, i, j, ans, count);
                }
            }
        }
        return ans;
    }
    void helper(vector<vector<int>> &grid, int row, int col, int &ans, int count)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(row < 0 || col < 0 || row >= m || col >= n || grid[row][col] == 0)
        {
            return;
        }
        count += grid[row][col];
        ans = max(ans, count);
        int temp = grid[row][col];
        grid[row][col] = 0;
        helper(grid, row + 1, col, ans, count);
        helper(grid, row, col + 1, ans, count);
        helper(grid, row - 1, col, ans, count);
        helper(grid, row, col - 1, ans, count);
        grid[row][col] = temp;
    }
};
