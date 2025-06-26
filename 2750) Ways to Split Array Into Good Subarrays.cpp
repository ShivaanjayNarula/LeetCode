class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n = nums.size();
        int mod = 1e9 + 7;
        vector<vector<int>> dp(n+1, vector<int> (2, -1));
        return helper(n-1, 0, nums, dp);
    }
    int helper(int id, int check, vector<int> &nums, vector<vector<int>> &dp)
    {
        int n = nums.size();
        int mod = 1e9 + 7;
        if(id < 0)
        {
            if(check == 1)
            {
                return 1;
            }
            return 0;
        }
        if(nums[id] == 1)
        {
            check++;
        }
        if(check > 1)
        {
            return 0;
        }
        if(dp[id][check] != -1)
        {
            return dp[id][check];
        }
        int take = helper(id-1, check, nums, dp);
        int notake = 0;
        if(check == 1)
        {
            notake = helper(id-1, 0, nums, dp);
        }
        dp[id][check] = (take + notake) % mod;
        return dp[id][check];
    }
};
