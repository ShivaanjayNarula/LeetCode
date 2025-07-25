class Solution {
    public boolean canPartition(int[] nums) {
        int n = nums.length;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if(sum % 2 != 0)
        {
            return false;
        }
        Boolean[][] dp = new Boolean[n+1][sum+1];
        return helper(nums, sum/2, 0, dp);
    }
    public boolean helper(int[] nums, int sum, int id, Boolean[][] dp)
    {
        int n = nums.length;
        if(id >= n)
        {
            return false;
        }
        if(sum == 0)
        {
            return true;
        }
        if(sum < 0)
        {
            return false;
        }
        if(dp[id][sum] != null)
        {
            return dp[id][sum];
        }
        Boolean take = helper(nums, sum - nums[id], id+1, dp);
        Boolean notake = helper(nums, sum, id+1, dp);
        dp[id][sum] = take || notake;
        return dp[id][sum];
    }
}
