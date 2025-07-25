class Solution {
public:
    int countVowelPermutation(int n) {
        int mod = 1e9+7;
        int ans = 0;
        vector<vector<int>> dp(5, vector<int>(n+1, -1));
        for(int i = 0; i < 5; i++)
        {
            ans = (ans + helper(n, 1, i, dp)) % mod;
        }
        return ans;
    }
    int helper(int n, int id, int ch, vector<vector<int>> &dp)
    {
        int mod = 1e9+7;
        if(id == n)
        {
            return 1;
        }
        if(dp[ch][id] != -1)
        {
            return dp[ch][id];
        }
        int count = 0;
        if(ch == 0)
        {
            count = (count + helper(n, id+1, 1, dp) % mod) % mod;
        }
        if(ch == 1)
        {
            count = (count + helper(n, id+1, 0, dp) % mod) % mod;
            count = (count + helper(n, id+1, 2, dp) % mod) % mod;
        }
        if(ch == 2)
        {
            count = (count + helper(n, id+1, 0, dp) % mod) % mod;
            count = (count + helper(n, id+1, 1, dp) % mod) % mod;
            count = (count + helper(n, id+1, 3, dp) % mod) % mod;
            count = (count + helper(n, id+1, 4, dp) % mod) % mod;
        }
        if(ch == 3)
        {
            count = (count + helper(n, id+1, 2, dp) % mod) % mod;
            count = (count + helper(n, id+1, 4, dp) % mod) % mod;
        }
        if(ch == 4)
        {
            count = (count + helper(n, id+1, 0, dp) % mod) % mod;
        }
        count %= mod;
        dp[ch][id] = count;
        return count;
    }
};
