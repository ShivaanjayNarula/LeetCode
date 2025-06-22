class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return helper(nums, 0, n-1, dp);
    }
    int helper(vector<int> &nums, int start, int end, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(start > end)
        {
            return 0;
        }
        if(dp[start][end] != -1)
        {
            return dp[start][end];
        }
        int ans = INT_MIN;
        for(int i = start; i <= end; i++)
        {
            int prev = 1;
            int next = 1;
            if(start - 1 >= 0)
            {
                prev = nums[start-1];
            }
            else
            {
                prev = 1;
            }
            if(end + 1 < n)
            {
                next = nums[end+1];
            }
            else
            {
                next = 1;
            }
            int curr = prev * nums[i] * next;
            int left = helper(nums, start, i-1, dp);
            int right = helper(nums, i+1, end, dp);
            ans = max(ans, curr + left + right);
        }
        dp[start][end] = ans;
        return ans;
    }
};
