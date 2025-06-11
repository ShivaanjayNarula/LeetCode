class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& nums) {
        double ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    ans = max(ans, 0.5 * abs(nums[i][0] * nums[j][1] + nums[j][0] * 
                    nums[k][1] + nums[k][0] * nums[i][1]- nums[j][0] * nums[i][1] - 
                    nums[k][0] * nums[j][1] - nums[i][0] * nums[k][1]));
                }
            }
        }
        return ans;
    }
};
