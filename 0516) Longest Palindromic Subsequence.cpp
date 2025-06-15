class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return helper(0, n-1, s, dp);
    }
    int helper(int i, int j, string &s, vector<vector<int>> &dp)
    {
        int n = s.size();
        if(i > j)
        {
            return 0;
        }
        if(i == j)
        {
            return 1;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(s[i] == s[j])
        {
            dp[i][j] = 2 + helper(i+1, j-1, s, dp);
        }
        else
        {
            dp[i][j] = max(helper(i+1, j, s, dp), helper(i, j-1, s, dp));
        }
        return dp[i][j];
    }
};
