class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
        return helper(0, k, piles, dp);
    }
    int helper(int id, int k, vector<vector<int>> &piles, vector<vector<int>> &dp)
    {
        int m = piles.size();
        if(k == 0 || id == m)
        {
            return 0;
        }
        int n = piles[id].size();
        if(dp[id][k] != -1)
        {
            return dp[id][k];
        }
        int ans = 0;
        int take = 0;
        int notake = helper(id+1, k, piles, dp);
        for(int i = 0; i < n && i < k; i++)
        {
            take += piles[id][i];
            ans = max({ans, notake, take+helper(id+1, k-i-1, piles, dp)});
        }
        dp[id][k] = ans;
        return ans;
    }
};
