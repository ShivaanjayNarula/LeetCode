class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, -1);
        return helper(low, high, zero, one, 0, dp);
    }
    int helper(int low, int high, int zero, int one, int id, vector<int> &dp)
    {
        int mod = 1e9 + 7;
        if(id > high)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int case1 = helper(low, high, zero, one, id + zero, dp) % mod;
        int case2 = helper(low, high, zero, one, id + one, dp) % mod;
        dp[id] = (case1 + case2) % mod;
        if(id >= low)
        {
            dp[id]++;
        }
        return dp[id];
    }
};
