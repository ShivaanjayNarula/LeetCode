class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n+1, -1);
        return helper(0, questions, dp);
    }
    long long helper(int id, vector<vector<int>> &nums, vector<long long> &dp)
    {
        int n = nums.size();
        if(id >= n)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        long long pick = nums[id][0] + helper(id + 1 + nums[id][1], nums, dp);
        long long leave = helper(id + 1, nums, dp);
        dp[id] = max(pick, leave);
        return dp[id];
    }
};
