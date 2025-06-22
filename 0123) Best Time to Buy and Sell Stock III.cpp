class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(5, -1));
        return helper(prices, 0, 4, dp);
    }
    int helper(vector<int> &prices, int id, int limit, vector<vector<int>> &dp)
    {
        int n = prices.size();
        if(id == n)
        {
            return 0;
        }
        if(limit == 0)
        {
            return 0;
        }
        if(dp[id][limit] != -1)
        {
            return dp[id][limit];
        }
        int check1 = helper(prices, id+1, limit, dp);
        int check2 = 0;
        if(limit % 2 == 0)
        {
            check2 = helper(prices, id+1, limit-1, dp) - prices[id];
        }
        else
        {
            check2 = helper(prices, id+1, limit-1, dp) + prices[id];
        }
        dp[id][limit] = max(check1, check2);
        return dp[id][limit];
    }
};
