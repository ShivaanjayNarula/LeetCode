class Solution {
public:
    int countPalindromicSubsequences(string s) {
        int n = s.size();
        int mod =1e9+7;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
        }
        for(int len = 1; len < n; len++)
        {
            for(int i = 0; i < n - len; i++)
            {
                int j = i + len;
                if(s[i] == s[j])
                {
                    int left = i+1;
                    int right = j-1;
                    while(left <= right && s[left] != s[i])
                    {
                        left++;
                    }
                    while(left <= right && s[right] != s[j])
                    {
                        right--;
                    }
                    dp[i][j] = (2 * dp[i+1][j-1]) % mod;
                    if(left < right)
                    {
                        dp[i][j] = (dp[i][j] - dp[left+1][right-1] + mod) % mod;
                    }
                    else if(left == right)
                    {
                        dp[i][j] = (dp[i][j] + 1) % mod;
                    }
                    else
                    {
                        dp[i][j] = (dp[i][j] + 2) % mod;
                    }
                }
                else
                {
                    dp[i][j] = ((dp[i+1][j] + dp[i][j-1]) % mod - dp[i+1][j-1] + mod) % mod;
                }
            }
        }
        return dp[0][n-1];
    }
};
