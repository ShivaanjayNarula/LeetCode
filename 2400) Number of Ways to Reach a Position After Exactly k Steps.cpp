class Solution {
public:
    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(k+1, vector<int>(startPos + endPos + k, -1));
        return helper(startPos, endPos, k, dp);
    }
    int helper(int start, int end, int k, vector<vector<int>> &dp)
    {
        int mod = 1e9 + 7;
        if(k == 0)
        {
            if(start == end)
            {
                return 1;
            }
            return 0;
        }
        if(k < abs(end - start))
        {
            return 0;
        }
        if(dp[k][start+k] != -1)
        {
            return dp[k][start+k];
        }
        int left = helper(start-1, end, k-1, dp) % mod;
        int right = helper(start+1, end, k-1, dp) % mod;
        dp[k][start+k] = (left + right) % mod;
        return dp[k][start+k];
    }
};
