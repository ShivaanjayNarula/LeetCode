class Solution {
public:
    int superEggDrop(int k, int n) {
        vector<vector<int>> dp(k+1, vector<int>(n+1, -1));
        return helper(k, n, dp);
    }
    int helper(int k, int n, vector<vector<int>> &dp)
    {
        if(n == 0 || n == 1)
        {
            return n;
        }
        if(k == 1)
        {
            return n;
        }
        if(dp[k][n] != -1)
        {
            return dp[k][n];
        }
        int ans = INT_MAX;
        int left = 1;
        int right = n-1;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            int broke = helper(k-1, mid-1, dp);
            int notbroke = helper(k, n-mid, dp);
            ans = min(ans, 1 + max(broke, notbroke));
            if(broke > notbroke)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        dp[k][n] = ans;
        return ans;
    }
};
