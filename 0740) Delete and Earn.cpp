class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]] += nums[i];
            maxi = max(maxi, nums[i]);
        }
        vector<int> dp(maxi+1, -1);
        return helper(maxi, mp, dp);
    }
    int helper(int id, unordered_map<int, int> &mp, vector<int> &dp)
    {
        if(id <= 0)
        {
            return 0;
        }
        if(dp[id] != -1)
        {
            return dp[id];
        }
        int pick = mp[id] + helper(id-2, mp, dp);
        int skip = helper(id-1, mp, dp);
        dp[id] = max(pick, skip);
        return dp[id];
    }
};
