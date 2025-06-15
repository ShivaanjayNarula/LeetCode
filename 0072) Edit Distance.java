class Solution {
    public int minDistance(String word1, String word2) {
        int m = word1.length();
        int n = word2.length();
        int[][] dp = new int[m+1][n+1];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                dp[i][j] = -1;
            }
        }
        return helper(0, 0, word1, word2, dp);
    }
    public int helper(int i, int j, String word1, String word2, int[][] dp)
    {
        int m = word1.length();
        int n = word2.length();
        if(i == m)
        {
            return n-j;
        }
        if(j == n)
        {
            return m-i;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(word1.charAt(i) == word2.charAt(j))
        {
            dp[i][j] = helper(i+1, j+1, word1, word2, dp);
        }
        else
        {
            int insert = 1 + helper(i, j+1, word1, word2, dp);
            int remove = 1 + helper(i+1, j, word1, word2, dp);
            int replace = 1 + helper(i+1, j+1, word1, word2, dp);
            dp[i][j] = Math.min(insert, Math.min(remove, replace));
        }
        return dp[i][j];
    }
}
