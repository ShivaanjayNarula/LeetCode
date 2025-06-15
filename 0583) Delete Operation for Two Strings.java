class Solution {
    public int minDistance(String word1, String word2) {
        int m = word1.length();
        int n = word2.length();
        int[][] dp = new int[m+1][n+1];
        for(int i = 0; i < m+1; i++)
        {
            for(int j = 0; j < n+1; j++)
            {
                dp[i][j] = -1;
            }
        }
        return helper(m-1, n-1, word1, word2, dp);
    }
    int helper(int i, int j, String word1, String word2, int[][] dp)
    {
        if(i < 0)
        {
            return j+1;
        }
        if(j < 0)
        {
            return i+1;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(word1.charAt(i) == word2.charAt(j))
        {
            dp[i][j] = helper(i-1, j-1, word1, word2, dp);
        }
        else
        {
            dp[i][j] = 1 + Math.min(helper(i-1, j, word1, word2, dp), helper(i, j-1, word1, word2, dp));
        }
        return dp[i][j];
    }
}
