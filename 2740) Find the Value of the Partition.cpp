class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[n-1];
        for(int i = 1; i < n; i++)
        {
            ans = min(ans, nums[i] - nums[i-1]);
        }
        return ans;
    }
};
