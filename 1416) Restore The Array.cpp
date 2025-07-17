class Solution {
public:
    int numberOfArrays(string s, int k) {
        int n = s.size();
        int mod = 1e9+7;
        vector<int> dp(n+1, -1);
        return helper(s, k, 0, dp);
    }
    int helper(string &s, int k, int id, vector<int> &dp)
    {
        int n = s.size();
        int mod = 1e9+7;
        if(id == n)
        {
            return 1;
        }
        if(s[id] == '0')
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int ans = 0;
        long long num = 0;
        for(int j = id; j < n; j++)
        {
            num = num * 10 + s[j] - '0';
            if(num > k)
            {
                break;
            }
            ans = (ans + helper(s, k, j+1, dp) % mod) % mod;
        }
        dp[id] = ans;
        return ans;
    }
};
