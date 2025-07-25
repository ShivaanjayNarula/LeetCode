class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if(sum % 2 != 0)
        {
            return false;
        }
        vector<vector<int>> dp(n+1, vector<int>(sum + 1, -1));
        return helper(nums, sum/2, 0, dp);
    }
    int helper(vector<int> &nums, int sum, int id, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(sum == 0)
        {
            return true;
        }
        if(sum < 0)
        {
            return false;
        }
        if(id >= n)
        {
            return false;
        }
        if(dp[id][sum] != -1)
        {
            return dp[id][sum];
        }
        int take = helper(nums, sum - nums[id], id+1, dp);
        int notake = helper(nums, sum, id+1, dp);
        dp[id][sum] = take || notake;
        return dp[id][sum];
    }
};
