class Solution {
public:
    int numberOfWays(int n, int x) {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return helper(1, 0, n, x, dp);
    }
    int helper(int id, int sum, int n, int x, vector<vector<int>> &dp)
    {
        int mod = 1e9 + 7;
        if(sum == n)
        {
            return 1;
        }
        if(sum > n || id > n)
        {
            return 0;
        }
        if(dp[id][sum] != -1)
        {
            return dp[id][sum];
        }
        long long power = pow(id, x);
        if(power > n - sum)
        {
            return dp[id][sum] = helper(id+1, sum, n, x, dp) % mod;
        }
        long long take = helper(id+1, sum + power, n, x, dp) % mod;
        long long notake = helper(id+1, sum, n, x, dp) % mod;
        dp[id][sum] = (take + notake) % mod;
        return dp[id][sum];
    }
};
