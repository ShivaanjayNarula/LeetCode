class Solution {
public:
    int countSubstrings(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<vector<int>>> dp(m+1, vector<vector<int>>(n+1, vector<int>(2, -1)));
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ans += helper(i, j, s, t, false, dp);
            }
        }
        return ans;
    }
    int helper(int i, int j, string &s, string &t, bool diff, vector<vector<vector<int>>> &dp)
    {
        int m = s.size();
        int n = t.size();
        if(i == m || j == n)
        {
            return 0;
        }
        if(dp[i][j][diff] != -1)
        {
            return dp[i][j][diff];
        }
        if(diff == true)
        {
            if(s[i] != t[j])
            {
                dp[i][j][diff] = 0;
                return dp[i][j][diff];
            }
            dp[i][j][diff] = 1 + helper(i+1, j+1, s, t, true, dp);
            return dp[i][j][diff];
        }
        if(s[i] != t[j])
        {
            dp[i][j][diff] = 1 + helper(i+1, j+1, s, t, true, dp);
            return dp[i][j][diff];
        }
        dp[i][j][diff] = helper(i+1, j+1, s, t, false, dp);
        return dp[i][j][diff];
    }
};
