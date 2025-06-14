class Solution {
public:
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        int n = types.size();
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return helper(types, target, 0, dp);
    }
    int helper(vector<vector<int>> &types, int target, int id, vector<vector<int>> &dp)
    {
        int n = types.size();
        int mod = 1e9 + 7;
        if(target == 0)
        {
            return 1;
        }
        if(id == n || target < 0)
        {
            return 0;
        }
        if(dp[id][target] != -1)
        {
            return dp[id][target];
        }
        int ways = 0;
        int count = types[id][0];
        int marks = types[id][1];
        for(int i = 0; i <= count; i++)
        {
            if(target >= i * marks)
            {
                ways += helper(types, target - i * marks, id+1, dp);
                ways %= mod;
            }
            else
            {
                break;
            }
        }
        dp[id][target] = ways;
        return dp[id][target];
    }
};
