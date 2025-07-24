class Solution {
public:
    bool checkPartitioning(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        for(int i = 1; i < n-1; i++)
        {
            for(int j = i; j < n-1; j++)
            {
                if(check(0, i-1, s, dp) && check(i, j, s, dp) && check(j+1, n-1, s, dp))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool check(int i, int j, string &s, vector<vector<int>> &dp)
    {
        if(i >= j)
        {
            return true;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(s[i] == s[j] && check(i+1, j-1, s, dp))
        {
            dp[i][j] = true;
        }
        else
        {
            dp[i][j] = false;
        }
        return dp[i][j];
    }
};
