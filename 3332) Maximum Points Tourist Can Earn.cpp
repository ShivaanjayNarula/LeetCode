class Solution {
public:
    int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        int ans = 0;
        ans = max(ans,helper(-1, 0, k, n, stayScore, travelScore, dp));
        return ans;
    }
    int helper(int id1, int id2, int k, int n, vector<vector<int>>& stay, vector<vector<int>>& travel, vector<vector<int>>& dp) {
        if(id2 == k)
        {
            return 0;
        }
        if(dp[id1+1][id2] != 0)
        {
            return dp[id1 + 1][id2] - 1;
        }
        int ans = 0;
        if(id1 != -1)
        {
            ans = stay[id2][id1] + helper(id1, id2 + 1, k, n, stay, travel, dp);
        }
        for(int i = 0; i < n; i++)
        {
            if(i != id1)
            {
                if(id1 == -1)
                {
                    ans = max(ans, helper(i, id2, k, n, stay, travel, dp));
                }
                else
                {
                    ans = max(ans, travel[id1][i] + helper(i, id2 + 1, k, n, stay, travel, dp));
                }
            }
        }
        dp[id1+1][id2] = ans + 1;
        return ans;
    }
};
