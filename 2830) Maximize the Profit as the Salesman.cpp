class Solution {
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        int m = offers.size();
        sort(offers.begin(), offers.end());
        vector<int> dp(m+1, -1);
        return helper(0, offers, dp);
    }
    int helper(int id, vector<vector<int>> &nums, vector<int> &dp)
    {
        int n = nums.size();
        if(id == n)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int take = nums[id][2];
        int notake = helper(id+1, nums, dp);
        int left = id+1;
        int right = n-1;
        int id2 = n;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(nums[mid][0] > nums[id][1])
            {
                right = mid-1;
                id2 = mid;
            }
            else
            {
                left = mid+1;
            }
        }
        take += helper(id2, nums, dp);
        dp[id] = max(take, notake);
        return dp[id];
    }
};
