class Solution {
public:
    int numberOfStableArrays(int zero, int one, int limit) {
        int mod = 1e9 + 7;
        vector<vector<vector<int>>> dp(zero+1, vector<vector<int>>(one+1, vector<int>(2, -1)));
        int count1 = helper(zero, one, limit, true, dp) % mod;
        int count2 = helper(zero, one, limit, false, dp) % mod;
        int ans = (count1 + count2) % mod;
        return ans;
    }
    int helper(int zero, int one, int limit, bool check, vector<vector<vector<int>>> &dp)
    {
        int mod = 1e9 + 7;
        if(zero == 0 && one == 0)
        {
            return 1;
        }
        if(dp[zero][one][check] != -1)
        {
            return dp[zero][one][check];
        }
        int ans = 0;
        if(check == true)
        {
            for(int i = 1; i <= min(one, limit); i++)
            {
                ans = (ans + helper(zero, one-i, limit, false, dp) % mod) % mod;
            }
        }
        else if(check == false)
        {
            for(int i = 1; i <= min(zero, limit); i++)
            {
                ans = (ans + helper(zero-i, one, limit, true, dp) % mod) % mod;
            }
        }
        dp[zero][one][check] = ans;
        return ans;
    }
};
