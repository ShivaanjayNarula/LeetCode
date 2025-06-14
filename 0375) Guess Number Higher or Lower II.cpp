class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return helper(0, n, dp);
    }
    int helper(int id, int n, vector<vector<int>> &dp)
    {
        if(id >= n)
        {
            return 0;
        }
        if(dp[id][n] != -1)
        {
            return dp[id][n];
        }
        int mini = INT_MAX;
        for(int i = id; i <= n; i++)
        {
            int cost = i + max(helper(id, i-1, dp), helper(i+1, n, dp));
            mini = min(mini, cost);
        }
        dp[id][n] = mini;
        return dp[id][n];
    }
};
