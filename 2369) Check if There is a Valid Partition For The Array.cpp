class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        return helper(0, nums, dp);
    }
    int helper(int id, vector<int> &nums, vector<int> &dp)
    {
        int n = nums.size();
        if(id == n)
        {
            return true;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        if(id+1 < n && nums[id] == nums[id+1])
        {
            if(helper(id+2, nums, dp))
            {
                dp[id] = true;
                return dp[id];
            }
        }
        if(id+2 < n && nums[id] == nums[id+1] && nums[id] == nums[id+2])
        {
            if(helper(id+3, nums, dp))
            {
                dp[id] = true;
                return dp[id];
            }
        }
        if(id + 2 < n && nums[id] + 1 == nums[id+1] && nums[id] + 2 == nums[id+2])
        {
            if(helper(id+3, nums, dp))
            {
                dp[id] = true;
                return dp[id];
            }
        }
        dp[id] = false;
        return dp[id];
    }
};
