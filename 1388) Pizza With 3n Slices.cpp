class Solution {
public:
    int maxSizeSlices(vector<int>& slices) {
        int n = slices.size();
        int k = n/3;
        vector<vector<int>> dp1(n+1, vector<int>(k+1, -1));
        vector<vector<int>> dp2(n+1, vector<int>(k+1, -1));
        int case1 = helper(0, n-2, k, slices, dp1);
        int case2 = helper(1, n-1, k, slices, dp2);
        return max(case1, case2);
    }
    int helper(int start, int end, int rem, vector<int> &slices, vector<vector<int>> &dp)
    {
        if(start > end || rem == 0)
        {
            return 0;
        }
        if(dp[start][rem] != -1)
        {
            return dp[start][rem];
        }
        dp[start][rem] = max(slices[start] + helper(start+2, end, rem-1, slices, dp), helper(start+1, end, rem, slices, dp));
        return dp[start][rem];
    }
};
