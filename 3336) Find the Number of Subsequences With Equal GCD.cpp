class Solution {
public:
    int subsequencePairCount(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(maxi+1, vector<int>(maxi+1, -1)));
        return helper(0, 0, 0, nums, dp);
    }
    int helper(int id, int one, int two, vector<int> &nums, vector<vector<vector<int>>> &dp)
    {
        int n = nums.size();
        int mod = 1e9 + 7;
        if(id >= n)
        {
            if(one != 0 && two != 0 && one == two)
            {
                return 1;
            }
            return 0;
        }
        if(dp[id][one][two] != -1)
        {
            return dp[id][one][two];
        }
        long long ans = 0;
        if(one == 0)
        {
            ans =  (ans + helper(id+1, nums[id], two, nums, dp)) % mod;
        }
        else
        {
            ans = (ans + helper(id+1, gcd(one, nums[id]), two, nums, dp)) % mod;
        }
        if(two == 0)
        {
            ans = (ans + helper(id+1, one, nums[id], nums, dp)) % mod;
        }
        else
        {
            ans = (ans + helper(id+1, one, gcd(two, nums[id]), nums, dp)) % mod;
        }
        ans = (ans + helper(id+1, one, two, nums, dp)) % mod;
        dp[id][one][two] = ans;
        return ans;
    }
};
