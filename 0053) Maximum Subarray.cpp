class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int add = nums[0];
        for(int i = 1; i < n; i++)
        {
            add = max(nums[i], add + nums[i]);
            ans = max(ans, add);
        }
        return ans;
    }
};
