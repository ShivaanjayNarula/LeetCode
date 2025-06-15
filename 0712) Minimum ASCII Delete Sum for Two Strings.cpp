class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, s1, s2, dp);
    }
    int helper(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
    {
        int m = s1.size();
        int n = s2.size();
        if(i == m && j == n)
        {
            return 0;
        }
        if(i == m)
        {
            int ans = 0;
            for(int k = j; k < n; k++)
            {
                ans += s2[k];
            }
            return ans;
        }
        if(j == n)
        {
            int ans = 0;
            for(int k = i; k < m; k++)
            {
                ans += s1[k];
            }
            return ans;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(s1[i] == s2[j])
        {
            dp[i][j] = helper(i+1, j+1, s1, s2, dp);
        }
        else
        {
            dp[i][j] = min(s1[i] + helper(i+1, j, s1, s2, dp), s2[j] + helper(i, j+1, s1, s2, dp));
        }
        return dp[i][j];
    }
};
