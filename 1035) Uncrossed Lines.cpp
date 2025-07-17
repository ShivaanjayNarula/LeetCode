class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(0, 0, nums1, nums2, dp);
    }
    int helper(int i, int j, vector<int> &nums1, vector<int> &nums2, vector<vector<int>> &dp)
    {
        int m = nums1.size();
        int n = nums2.size();
        if(i >= m)
        {
            return 0;
        }
        if(j >= n)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(nums1[i] == nums2[j])
        {
            dp[i][j] = 1 + helper(i+1, j+1, nums1, nums2, dp);
        }
        else
        {
            dp[i][j] = max(helper(i+1, j, nums1, nums2, dp), helper(i, j+1, nums1, nums2, dp));
        }
        return dp[i][j];
    }
};
