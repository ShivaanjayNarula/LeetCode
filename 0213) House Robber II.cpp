class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
        {
            return nums[0];
        }
        vector<int> dp1(n+1, -1);
        vector<int> dp2(n+1, -1);
        int check1 = helper(nums, 0, n-2, dp1);
        int check2 = helper(nums, 1, n-1, dp2);
        return max(check1, check2);
    }
    int helper(vector<int> &nums, int start, int end, vector<int> &dp)
    {
        int n = nums.size();
        if(start > end)
        {
            return 0;
        }
        if(dp[start] != -1)
        {
            return dp[start];
        }
        int take = nums[start] + helper(nums, start+2, end, dp);
        int skip = helper(nums, start+1, end, dp);
        dp[start] = max(take, skip);
        return dp[start];
    }
};
