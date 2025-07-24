class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n+1, -1);
        return helper(0, n-1, s, dp);
    }
    int helper(int i, int j, string &s, vector<int> &dp)
    {
        int n = s.size();
        if(i >= j || check(s, i, j))
        {
            return 0;
        }
        if(dp[i] != -1)
        {
            return dp[i];
        }
        int ans = INT_MAX;
        for(int k = i; k < j; k++)
        {
            if(check(s, i, k))
            {
                int temp = helper(k+1, j, s, dp) + 1;
                ans = min(ans, temp);
            }
        }
        dp[i] = ans;
        return ans;
    }
    bool check(string &s, int i, int j)
    {
        while(i < j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
