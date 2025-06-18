class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int m = obstacleGrid.length;
        int n = obstacleGrid[0].length;
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1)
        {
            return 0;
        }
        int [][]dp = new int[m+1][n+1];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                dp[i][j] = -1;
            }
        }
        return helper(m-1, n-1, obstacleGrid, dp);
    }
    int helper(int i, int j, int[][] nums, int[][] dp)
    {
        if(i < 0 || j < 0)
        {
            return 0;
        }
        if(nums[i][j] == 1)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(i == 0 && j == 0)
        {
            return 1;
        }
        dp[i][j] = helper(i-1, j, nums, dp) + helper(i, j-1, nums, dp);
        return dp[i][j];
    }
}
