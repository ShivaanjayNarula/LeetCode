class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(m+1, vector<vector<int>>(n+1, vector<int>(k+1, -1)));
        return helper(0, 0, 0, k, grid, dp);
    }
    int helper(int i, int j, int sum, int k, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
    {
        int m = grid.size();
        int n = grid[0].size();
        int mod = 1e9 + 7;
        if(i >= m || j >= n)
        {
            return 0;
        }
        sum = (sum + grid[i][j]) % k;
        if(i == m-1 && j == n-1)
        {
            if(sum == 0)
            {
                return 1;
            }
            return 0;
        }
        if(dp[i][j][sum] != -1)
        {
            return dp[i][j][sum];
        }
        dp[i][j][sum] = (helper(i, j+1, sum, k, grid, dp) + helper(i+1, j, sum, k, grid, dp)) % mod;
        return dp[i][j][sum];
    }
};
