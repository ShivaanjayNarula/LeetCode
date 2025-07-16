class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2, -1));
        return helper(0, true, prices, fee, dp);
    }
    int helper(int id, bool check, vector<int> &prices, int fee, vector<vector<int>> &dp)
    {
        int n = prices.size();
        if(id == n)
        {
            return 0;
        }
        if(dp[id][check] != -1)
        {
            return dp[id][check];
        }
        int ans = 0;
        if(check)
        {
            int buy = -prices[id] + helper(id+1, false, prices, fee, dp);
            int leave = helper(id+1, check, prices, fee, dp);
            ans = max(buy, leave);
        }
        else
        {
            int sell = prices[id] - fee + helper(id+1, true, prices, fee, dp);
            int leave = helper(id+1, check, prices, fee, dp);
            ans = max(sell, leave);
        }
        dp[id][check] = ans;
        return ans;
    }
};
