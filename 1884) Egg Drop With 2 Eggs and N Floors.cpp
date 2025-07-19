class Solution {
public:
    int twoEggDrop(int n) {
        int k = 2;
        vector<vector<int>> dp(n+1, vector<int> (k+1, -1));
        return helper(n, k, dp);
    }
    int helper(int n, int k, vector<vector<int>> &dp)
    {
        if(n == 0)
        {
            return 0;
        }
        if(k == 1)
        {
            return n;
        }
        if(dp[n][k] != -1)
        {
            return dp[n][k];
        }
        int left = 1;
        int right = n;
        int ans = n;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            int broke = helper(mid-1, k-1, dp);
            int notbroke = helper(n-mid, k, dp);
            if(broke > notbroke)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
            ans = min(ans, 1 + max(broke, notbroke));
        }
        dp[n][k] = ans;
        return dp[n][k];
    }
};
