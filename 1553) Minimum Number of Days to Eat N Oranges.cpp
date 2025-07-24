class Solution {
public:
    int minDays(int n) {
        unordered_map<int, int> mp;
        return helper(n, mp);
    }
    int helper(int n, unordered_map<int, int> &dp)
    {
        if(n <= 1)
        {
            return n;
        }
        if(dp.count(n))
        {
            return dp[n];
        }
        int ans = 1 + min(n%2 + helper(n/2, dp), n%3 + helper(n/3, dp));
        dp[n] = ans;
        return ans;
    }
};
