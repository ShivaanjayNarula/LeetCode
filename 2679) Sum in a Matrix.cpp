class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        for(int i = 0; i < m; i++)
        {
            sort(nums[i].begin(), nums[i].end());
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int add = 0;
            for(int j = 0; j < m; j++)
            {
                add = max(add, nums[j][i]);
            }
            ans += add;
        }
        return ans;
    }
};
