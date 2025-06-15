class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int end = 0;
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        for(int len = 1; len <= n; len++)
        {
            for(int i = 0; i <= n - len; i++)
            {
                int j = i + len - 1;
                int check = helper(i, j, s, dp);
                if(check == 1)
                {
                    if(j-i+1 > end)
                    {
                        start = i;
                        end = j-i+1;
                    }
                }
            }
        }
        return s.substr(start, end);
    }
    int helper(int i, int j, string &s, vector<vector<int>> &dp)
    {
        int n = s.size();
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(i == j)
        {
            dp[i][j] = 1;
            return dp[i][j];
        }
        if(j-i == 1)
        {
            if(s[i] == s[j])
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0;
            }
            return dp[i][j];
        }
        if(s[i] == s[j] && dp[i+1][j-1] == 1)
        {
            dp[i][j] = 1;
        }
        else
        {
            dp[i][j] = 0;
        }
        return dp[i][j];
    }
};
