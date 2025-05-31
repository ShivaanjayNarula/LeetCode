class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            ans += max(nums[i] - nums[i-1], 0);
        }
        return ans;
    }
};
