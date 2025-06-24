class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(m+1, vector<vector<int>> (n+1, vector<int>(m+n+1, -1)));
        return helper(0, 0, 0, grid, dp);
    }
    int helper(int i, int j, int k, vector<vector<char>>& grid, vector<vector<vector<int>>> &dp)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(i >= m || j >= n)
        {
            return false;
        }
        if(grid[i][j] == '(')
        {
            k++;
        }
        else if(grid[i][j] == ')')
        {
            k--;
        }
        if(k < 0)
        {
            return false;
        }
        if(i == m-1 && j == n-1)
        {
            if(k == 0)
            {
                return true;
            }
            return false;
        }
        if(dp[i][j][k] != -1)
        {
            return dp[i][j][k];
        }
        dp[i][j][k] = helper(i+1, j, k, grid, dp) || helper(i, j+1, k, grid, dp);
        return dp[i][j][k];
    }
};
