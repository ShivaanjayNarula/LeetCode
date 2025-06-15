class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<bool> dp(n+1, false);
        return helper(arr, start, dp);
    }
    bool helper(vector<int> &nums, int start, vector<bool> &dp)
    {
        int n = nums.size();
        if(start >= n || start < 0)
        {
            return false;
        }
        if(nums[start] == 0)
        {
            return true;
        }
        if(dp[start] == true)
        {
            return false;
        }
        dp[start] = true;
        bool left = helper(nums, start - nums[start], dp);
        bool right = helper(nums, start + nums[start], dp);
        dp[start] = left || right;
        return dp[start];
    }
};
