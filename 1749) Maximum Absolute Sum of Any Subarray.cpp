class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans = 0;
        int max_sum = 0;
        int min_sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            max_sum = max(0, nums[i] + max_sum);
            min_sum = min(0, nums[i] + min_sum);
            ans = max({ans, max_sum, abs(min_sum)});
        }
        return ans;
    }
};
