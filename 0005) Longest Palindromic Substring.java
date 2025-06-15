class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        int start = 0;
        int end = 0;
        int[][] dp = new int[n+1][n+1];
        for(int i = 0; i < n+1; i++)
        {
            for(int j = 0; j < n+1; j++)
            {
                dp[i][j] = -1;
            }
        }
        for(int len = 1; len <= n; len++)
        {
            for(int i = 0; i <= n - len; i++)
            {
                int j = i + len - 1;
                int check = helper(i, j, s, dp);
                if(check == 1)
                {
                    if(len > end)
                    {
                        start = i;
                        end = len;
                    }
                }
            }
        }
        return s.substring(start, start+end);
    }
    int helper(int i, int j, String s, int[][] dp)
    {
        int n = s.length();
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
            if(s.charAt(i) == s.charAt(j))
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0;
            }
            return dp[i][j];
        }
        if(s.charAt(i) == s.charAt(j) && dp[i+1][j-1] == 1)
        {
            dp[i][j] = 1;
        }
        else
        {
            dp[i][j] = 0;
        }
        return dp[i][j];
    }
}
