class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int n = cost.length;
        int[] dp = new int[n+1];
        for(int i = 0; i < n+1; i++)
        {
            dp[i] = -1;
        }
        return Math.min(helper(cost, 0, dp), helper(cost, 1, dp));
    }
    int helper(int[] cost, int id, int[] dp)
    {
        int n = cost.length;
        if(id >= n)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        dp[id] = cost[id] + Math.min(helper(cost, id+1, dp), helper(cost, id+2, dp));
        return dp[id];
    }
}
