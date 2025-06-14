class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        sort(satisfaction.begin(), satisfaction.end());
        return helper(satisfaction, n, 0, 1, dp);
    }
    int helper(vector<int>& satisfaction, int n, int i, int j, vector<vector<int>> &dp)
    {
        if(i >= n)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int check1 = (satisfaction[i] * j) + helper(satisfaction, n, i+1, j+1, dp);
        int check2 = helper(satisfaction, n, i+1, j, dp);
        dp[i][j] = max(check1, check2);
        return dp[i][j];
    }
};
