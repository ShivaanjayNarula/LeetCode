class Solution {
public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m+1, vector<int>(1e5, -1));
        return helper(mat, target, 0, 0, dp);
    }
    int helper(vector<vector<int>>& mat, int target, int id, int curr, vector<vector<int>>& dp)
    {
        int m = mat.size();
        int n = mat[0].size();
        if(id == m)
        {
            return abs(curr - target);
        }
        if(dp[id][curr] != -1)
        {
            return dp[id][curr];
        }
        int check = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            check = min(check, helper(mat, target, id+1, curr + mat[id][i], dp));
        }
        dp[id][curr] = check;
        return dp[id][curr];
    }
};
