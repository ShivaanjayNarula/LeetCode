class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        int m = rides.size();
        vector<long long> dp(m+1, -1);
        sort(rides.begin(), rides.end());
        return helper(0, n, rides, dp);
    }
    long long helper(int id, int n, vector<vector<int>> &nums, vector<long long> &dp)
    {
        int m = nums.size();
        if(id >= m)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int left = id+1;
        int right = m-1;
        int mid = left + (right - left)/2;
        while(left <= right)
        {
            mid = left + (right - left)/2;
            if(nums[mid][0] >= nums[id][1])
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        long long take = nums[id][1] + nums[id][2] - nums[id][0] + helper(left, n, nums, dp);
        long long notake = helper(id+1, n, nums, dp);
        dp[id] = max(take, notake);
        return dp[id];
    }
};
