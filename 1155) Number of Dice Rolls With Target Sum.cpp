class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return helper(n, k, target, dp);
    }
    int helper(int n, int k, int target, vector<vector<int>> &dp)
    {
        int mod = 1e9+7;
        if(target == 0 && n == 0)
        {
            return 1;
        }
        if(n == 0 || target <= 0)
        {
            return 0;
        }
        if(dp[n][target] != -1)
        {
            return dp[n][target];
        }
        long long ans = 0;
        for(int i = 1; i <= k; i++)
        {
            ans = (ans + helper(n-1, k, target-i, dp)) % mod;
        }
        dp[n][target] = ans;
        return ans;
    }
};
