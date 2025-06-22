class Solution {
public:
    int minDistance(vector<int>& houses, int k) {
        int n = houses.size();
        sort(houses.begin(), houses.end());
        vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
        return helper(0, k, houses, dp);
    }
    int helper(int id, int k, vector<int> &nums, vector<vector<int>> &dp)
    {
        int n = nums.size();
        if(k == 1)
        {
            int ans = 0;
            int avg = nums[(n + id)/2];
            for(int i = id; i < n; i++)
            {
                ans += abs(nums[i] - avg);
            }
            return ans;
        }
        if(dp[id][k] != -1)
        {
            return dp[id][k];
        }
        int ans = INT_MAX;
        for(int i = id; i <= n-k; i++)
        {
            int avg = nums[(id+i)/2];
            int check = 0;
            for(int j = id; j <= i; j++)
            {
                check += abs(nums[j] - avg);
            }
            check += helper(i+1, k-1, nums, dp);
            ans = min(ans, check);
        }
        dp[id][k] = ans;
        return ans;
    }
};
