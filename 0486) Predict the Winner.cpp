class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        int check = helper(nums, 0, n-1, dp);
        if(check >= 0)
        {
            return true;
        }
        return false;
    }
    int helper(vector<int> &nums, int start, int end, vector<vector<int>> &dp)
    {
        if(start > end)
        {
            return 0;
        }
        if(dp[start][end] != -1)
        {
            return dp[start][end];
        }
        int first = nums[start] - helper(nums, start + 1, end, dp);
        int last = nums[end] - helper(nums, start, end - 1, dp);
        dp[start][end] = max(first, last);
        return dp[start][end];
    }
};
