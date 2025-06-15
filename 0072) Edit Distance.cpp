class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(word1, word2, 0, 0, dp);
    }
    int helper(string &word1, string &word2, int i, int j, vector<vector<int>> &dp)
    {
        int m = word1.size();
        int n = word2.size();
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
        if(word1[i] == word2[j])
        {
            dp[i][j] = helper(word1, word2, i+1, j+1, dp);
        }
        else
        {
            int insert = 1 + helper(word1, word2, i, j+1, dp);
            int remove = 1 + helper(word1, word2, i+1, j, dp);
            int replace = 1 + helper(word1, word2, i+1, j+1, dp);
            dp[i][j] = min({insert, remove, replace});
        }
        return dp[i][j];
    }
};
