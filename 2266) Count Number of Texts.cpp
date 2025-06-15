class Solution {
public:
    int countTexts(string pressedKeys) {
        int n = pressedKeys.size();
        vector<int> dp(n+1, -1);
        return helper(0, pressedKeys, dp);
    }
    int helper(int id, string &s, vector<int> &dp)
    {
        int n = s.size();
        if(id >= n)
        {
            return 1;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int mod = 1e9 + 7;
        int ans = 0;
        ans += helper(id+1, s, dp);
        ans %= mod;
        if(id+1 < n && s[id] == s[id+1])
        {
            ans += helper(id+2, s, dp);
            ans %= mod;
        }
        if(id+2 < n && s[id] == s[id+1] && s[id] == s[id+2])
        {
            ans += helper(id+3, s, dp);
            ans %= mod;
        }
        if(id+3 < n && s[id] == s[id+1] && s[id] == s[id+2] && s[id] == s[id+3] && (s[id] == '7' || s[id] == '9'))
        {
            ans += helper(id+4, s, dp);
            ans %= mod;
        }
        dp[id] = ans;
        return ans;
    }
};
