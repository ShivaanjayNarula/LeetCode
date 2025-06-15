class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int m = words.size();
        int n = words[0].size();
        vector<vector<int>> freq(n, vector<int>(26, 0));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                freq[j][words[i][j] - 'a']++;
            }
        }
        int size = target.size();
        vector<vector<int>> dp(n+1, vector<int>(size+1, -1));
        return helper(0, 0, target, freq, dp);
    }
    int helper(int i, int j, string &target, vector<vector<int>> &freq, vector<vector<int>> &dp)
    {
        int n = freq.size();
        int size = target.size();
        if(j == size)
        {
            return 1;
        }
        if(i == n)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int mod = 1e9 + 7;
        long long ans = helper(i+1, j, target, freq, dp);
        ans %= mod;
        char ch = target[j];
        if(freq[i][ch-'a'] > 0)
        {
            ans += (1LL * freq[i][ch-'a'] * helper(i+1, j+1, target, freq, dp)) % mod;
            ans %= mod;
        }
        dp[i][j] = ans;
        return ans;
    }
};
