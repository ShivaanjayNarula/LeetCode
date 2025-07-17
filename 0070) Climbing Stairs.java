class Solution {
    public int climbStairs(int n) {
        int[] dp = new int[n+1];
        for(int i = 0; i < n+1; i++)
        {
            dp[i] = -1;
        }
        return helper(n, dp);
    }
    public int helper(int n, int[] dp)
    {
        if(n == 0)
        {
            return 1;
        }
        if(n == 1)
        {
            return 1;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        dp[n] = helper(n-1, dp) + helper(n-2, dp);
        return dp[n];
    }
}
