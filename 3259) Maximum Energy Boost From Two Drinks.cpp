class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        int n = energyDrinkA.size();
        vector<vector<long long>> dp(n+1, vector<long long>(3, -1));
        return max(helper(0, 1, energyDrinkA, energyDrinkB, dp), helper(0, 2, energyDrinkA, energyDrinkB, dp));
    }
    long long helper(int i, int j, vector<int> &nums1, vector<int> &nums2, vector<vector<long long>> &dp)
    {
        int n = nums1.size();
        if(i == n)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        long long take = 0;
        long long notake = 0;
        if(j == 1)
        {
            take = nums1[i] + helper(i+1, j, nums1, nums2, dp);
            notake = helper(i+1, j+1, nums1, nums2, dp);
        }
        else if(j == 2)
        {
            take = nums2[i] + helper(i+1, j, nums1, nums2, dp);
            notake = helper(i+1, j-1, nums1, nums2, dp);
        }
        dp[i][j] = max(take, notake);
        return dp[i][j];
    }
};
