class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return n - helper(s, 0, n-1, dp);
    }
    int helper(string &s, int left, int right, vector<vector<int>> &dp)
    {
        int n = s.size();
        if(left > right)
        {
            return 0;
        }
        if(left == right)
        {
            return 1;
        }
        if(dp[left][right] != -1)
        {
            return dp[left][right];
        }
        int ans = 0;
        if(s[left] == s[right])
        {
            ans = 2 + helper(s, left+1, right-1, dp);
        }
        else
        {
            ans = max(helper(s, left+1, right, dp), helper(s, left, right-1, dp));
        }
        dp[left][right] = ans;
        return dp[left][right];
    }
};
