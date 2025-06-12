class Solution {
    public int getMaximumGold(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] > 0)
                {
                    ans = Math.max(ans, helper(grid, i, j));
                }
            }
        }
        return ans;
    }
    int helper(int[][] grid, int row, int col)
    {
        int m = grid.length;
        int n = grid[0].length;
        if(row < 0 || col < 0 || row >= m || col >= n || grid[row][col] == 0)
        {
            return 0;
        }
        int temp = grid[row][col];
        grid[row][col] = 0;
        int add = Math.max(
            Math.max(helper(grid, row + 1, col), helper(grid, row - 1, col)),
            Math.max(helper(grid, row, col + 1), helper(grid, row, col - 1))
        );
        grid[row][col] = temp;
        return add + grid[row][col];
    }
}
