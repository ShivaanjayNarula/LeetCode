class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(word1, word2, m-1, n-1, dp);
    }
    int helper(string word1, string word2, int i, int j, vector<vector<int>> &dp)
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
        if(word1[i] == word2[j])
        {
            dp[i][j] = helper(word1, word2, i-1, j-1, dp);
        }
        else
        {
            dp[i][j] = min(helper(word1, word2, i-1, j, dp), helper(word1, word2, i, j-1, dp)) + 1;
        }
        return dp[i][j];
    }
};
