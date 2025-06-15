class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if(abs(target) > sum)
        {
            return 0;
        }
        vector<vector<int>> dp(n + 1, vector<int>(2 * sum + 1, -1));
        return helper(nums, 0, 0, target, sum, dp);
    }
    int helper(vector<int>& nums, int id1, int id2, int target, int sum, vector<vector<int>>& dp)
    {
        if(id1 == nums.size())
        {
            if(id2 == target)
            {
                return 1;
            }
            return 0;
        }
        if (dp[id1][id2+sum] != -1)
        {
            return dp[id1][id2 + sum];
        }
        dp[id1][id2+sum] = helper(nums, id1+1, id2+nums[id1], target, sum, dp) + helper(nums, id1+1, id2-nums[id1], target, sum, dp);
        return dp[id1][id2+sum];
    }
};
