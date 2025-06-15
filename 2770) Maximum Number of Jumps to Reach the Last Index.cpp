class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        int ans = helper(nums, target, 0, dp);
        if(ans > 0)
        {
            return ans;
        }
        return -1;
    }
    int helper(vector<int> &nums, int target, int id, vector<int> &dp)
    {
        int n = nums.size();
        if(id == n-1)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int ans = INT_MIN;
        for(int i = id+1; i < n; i++)
        {
            if(abs(nums[i] - nums[id]) <= target)
            {
                ans = max(ans, 1 + helper(nums, target, i, dp));
            }
        }
        dp[id] = ans;
        return dp[id];
    }
};
