class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        return helper(0, n-1, sum, m, nums, dp);
    }
    int helper(int i, int j, int sum, int m, vector<int> &nums, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(i >= j)
        {
            return true;
        }
        else if(j - i +1 <= 2)
        {
            return true;
        }
        else if(sum < m)
        {
            return false;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int ans = 0;
        if(sum - nums[i] >= m)
        {
            ans |= helper(i+1, j, sum - nums[i], m, nums, dp);
        }
        if(sum - nums[j] >= m)
        {
            ans |= helper(i, j-1, sum - nums[j], m, nums, dp);
        }
        dp[i][j] = ans;
        return ans;
    }
};
