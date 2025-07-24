class Solution {
public:
    int mergeStones(vector<int>& stones, int k) {
        int n = stones.size();
        if((n-1) % (k-1) != 0)
        {
            return -1;
        }
        vector<int> prefix(n+1, 0);
        for(int i = 0; i < n; i++)
        {
            prefix[i+1] = prefix[i] + stones[i];
        }
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return helper(stones, 0, n-1, k, dp, prefix);
    }
    int helper(vector<int> &stones, int id1, int id2, int k, vector<vector<int>> &dp, vector<int> &prefix)
    {
        int n = stones.size();
        if(id1 == id2)
        {
            return 0;
        }
        if(dp[id1][id2] != -1)
        {
            return dp[id1][id2];
        }
        int ans = INT_MAX;
        for(int mid = id1; mid < id2; mid += (k-1))
        {
            ans = min(ans, helper(stones, id1, mid, k, dp, prefix) + helper(stones, mid+1, id2, k, dp, prefix));
        }
        if((id2-id1) % (k-1) == 0)
        {
            ans += prefix[id2+1] - prefix[id1];
        }
        dp[id1][id2] = ans;
        return dp[id1][id2];
    }
};
