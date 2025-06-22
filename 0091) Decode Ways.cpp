class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1, -1);
        return helper(0, s, dp);
    }
    int helper(int id, string &s, vector<int> &dp)
    {
        int n = s.size();
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
        int ans = helper(id+1, s, dp);
        if(id < n-1)
        {
            int check = (s[id] - '0') * 10 + (s[id+1] - '0');
            if(check >= 10 && check <= 26)
            {
                ans += helper(id+2, s, dp);
            }
        }
        dp[id] = ans;
        return ans;
    }
};
