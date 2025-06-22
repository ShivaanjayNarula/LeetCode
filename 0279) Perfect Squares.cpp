class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, -1);
        return helper(n, dp);
    }
    int helper(int id, vector<int> &dp)
    {
        if(id == 0)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int ans = INT_MAX;
        for(int i = 1; i*i <= id; i++)
        {
            ans = min(ans, 1+helper(id-i*i, dp));
        }
        dp[id] = ans;
        return dp[id];
    }
};
