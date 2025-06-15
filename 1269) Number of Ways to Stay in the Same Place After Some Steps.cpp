class Solution {
public:
    int numWays(int steps, int arrLen) {
        int maxLen = min(arrLen, steps / 2 + 1);
        vector<vector<int>> dp(steps + 1, vector<int>(maxLen, -1));
        return helper(steps, maxLen, 0, dp);
    }
    int helper(int steps, int n, int id, vector<vector<int>> &dp) {
        int mod = 1e9 + 7;
        if(steps == 0)
        {
            if(id == 0)
            {
                return 1;
            }
            return 0;
        }
        if(dp[steps][id] != -1)
        {
            return dp[steps][id];
        }
        int ans = 0;
        if(id + 1 < n)
        {
            ans = (ans + helper(steps - 1, n, id + 1, dp)) % mod;
        }
        if(id - 1 >= 0)
        {
            ans = (ans + helper(steps - 1, n, id - 1, dp)) % mod;
        }
        ans = (ans + helper(steps - 1, n, id, dp)) % mod;
        dp[steps][id] = ans;
        return dp[steps][id];
    }
};
