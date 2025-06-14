class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(), cuts.end());
        vector<vector<int>> dp(cuts.size()+1, vector<int>(cuts.size()+1, -1));
        return helper(cuts, 0, cuts.size()-1, 0, n, dp);
    }
    int helper(vector<int> &cuts, int i, int j, int start, int end, vector<vector<int>> &dp)
    {
        if(i > j)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k = i; k <= j; k++)
        {
            int temp = end - start + helper(cuts, i, k-1, start, cuts[k], dp) + helper(cuts, k+1, j, cuts[k], end, dp);
            ans = min(temp, ans);
        }
        dp[i][j] = ans;
        return ans;
    }
};
