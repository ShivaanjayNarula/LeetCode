class Solution {
public:
    int countHousePlacements(int n) {
        int mod = 1e9+7;
        vector<int> dp(n+1, -1);
        int ans = helper(0, n, dp);
        ans = (1LL * ans * ans) % mod;
        return ans;
    }
    int helper(int id, int n, vector<int> &dp)
    {
        int mod = 1e9+7;
        if(id >= n)
        {
            return 1;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int take = helper(id+2, n, dp) % mod;
        int notake = helper(id+1, n, dp) % mod;
        dp[id] = (take + notake) % mod;
        return dp[id];
    }
};
