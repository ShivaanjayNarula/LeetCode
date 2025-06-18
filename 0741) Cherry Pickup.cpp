class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<vector<vector<int>>>> dp(n+1, vector<vector<vector<int>>>(n+1, vector<vector<int>>(n+1, vector<int>(n+1, INT_MIN))));
        return max(0, helper(0, 0, 0, 0, grid, dp));
    }
    int helper(int r1, int c1, int r2, int c2, vector<vector<int>>& grid, vector<vector<vector<vector<int>>>> &dp)
    {
        int n = grid.size();
        if(r1 >= n || r2 >= n || c1 >= n || c2 >= n || grid[r1][c1] == -1 || grid[r2][c2] == -1)
        {
            return INT_MIN;
        }
        if(r1 == n-1 && c1 == n-1)
        {
            return grid[r1][c1];
        }
        if(r2 == n-1 && c2 == n-1)
        {
            return grid[r2][c2];
        }
        if(dp[r1][c1][r2][c2] != INT_MIN)
        {
            return dp[r1][c1][r2][c2];
        }
        int ans = 0;
        if(r1 == r2 && c1 == c2)
        {
            ans = grid[r1][c1];
        }
        else
        {
            ans = grid[r1][c1] + grid[r2][c2];
        }
        ans += max({helper(r1 + 1, c1, r2 + 1, c2, grid, dp), helper(r1 + 1, c1, r2, c2 + 1, grid, dp), helper(r1, c1 + 1, r2 + 1, c2, grid, dp), helper(r1, c1 + 1, r2, c2 + 1, grid, dp)});
        dp[r1][c1][r2][c2] = ans;
        return ans;
    }
};
