class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        int ans = helper(nums, target, 0, dp);
        if(ans <= 0)
        {
            return -1;
        }
        return ans;
    }
    int helper(vector<int> &nums, int target, int id, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(target == 0)
        {
            return 0;
        }
        if(target < 0)
        {
            return INT_MIN;
        }
        if(id >= n)
        {
            return INT_MIN;
        }
        if(dp[id][target] != -1)
        {
            return dp[id][target];
        }
        int take = 1 + helper(nums, target - nums[id], id+1, dp);
        int skip = helper(nums, target, id+1, dp);
        dp[id][target] = max(take, skip);
        return dp[id][target];
    }
};
