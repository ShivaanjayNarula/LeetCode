class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(3, -1));
        return helper(0, 0, nums, dp);
    }
    int helper(int id, int rem, vector<int> &nums, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(id == n)
        {
            if(rem == 0)
            {
                return 0;
            }
            return INT_MIN;
        }
        if(dp[id][rem] != -1)
        {
            return dp[id][rem];
        }
        int take = nums[id] + helper(id+1, (rem + nums[id]) % 3, nums, dp);
        int notake = helper(id+1, rem, nums, dp);
        dp[id][rem] = max(take, notake);
        return dp[id][rem];
    }
};
