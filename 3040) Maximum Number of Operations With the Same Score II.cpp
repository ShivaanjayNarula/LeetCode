class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int left = 0;
        int right = n-1;
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        ans = max(ans, 1 + helper(nums, left+2, right, nums[left] + nums[left+1], dp));
        ans = max(ans, 1 + helper(nums, left+1, right-1, nums[left] + nums[right], dp));
        ans = max(ans, 1 + helper(nums, left, right-2, nums[right] + nums[right-1], dp));
        return ans;
    }
    int helper(vector<int> &nums, int left, int right, int sum, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(left >= right)
        {
            return 0;
        }
        if(dp[left][right] != -1)
        {
            return dp[left][right];
        }
        int ans = 0;
        if(nums[left] + nums[left+1] == sum)
        {
            ans = max(ans, 1 + helper(nums, left+2, right, sum, dp));
        }
        if(nums[left] + nums[right] == sum)
        {
            ans = max(ans, 1 + helper(nums, left+1, right-1, sum, dp));
        }
        if(nums[right] + nums[right-1] == sum)
        {
            ans = max(ans, 1 + helper(nums, left, right-2, sum, dp));
        }
        dp[left][right] = ans;
        return dp[left][right];
    }
};
