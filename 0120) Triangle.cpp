class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return helper(0, 0, triangle, dp);
    }
    int helper(int i, int j, vector<vector<int>> &nums, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(i == n)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int left = nums[i][j] + helper(i+1, j, nums, dp);
        int right = nums[i][j] + helper(i+1, j+1, nums, dp);
        dp[i][j] = min(left, right);
        return dp[i][j];
    }
};
