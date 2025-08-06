class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(m, n, s, p, dp);
    }
    bool helper(int i, int j, string &s, string &p, vector<vector<int>> &dp)
    {
        if(i == 0 && j == 0)
        {
            return true;
        }
        if(j == 0)
        {
            return false;
        }
        if(i == 0)
        {
            return check(p, j);
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(s[i-1] == p[j-1] || p[j-1] == '?')
        {
            dp[i][j] = helper(i-1, j-1, s, p, dp);
        }
        else if(p[j-1] == '*')
        {
            dp[i][j] = helper(i-1, j, s, p, dp) || helper(i, j-1, s, p, dp);
        }
        else
        {
            dp[i][j] = false;
        }
        return dp[i][j];
    }
    bool check(string &p, int j)
    {
        for(int i = 0; i < j; i++)
        {
            if(p[i] != '*')
            {
                return false;
            }
        }
        return true;
    }
};
