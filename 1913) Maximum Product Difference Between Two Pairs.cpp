class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans;
        int a = nums[0] * nums[1];
        int b = nums[n-1] * nums[n-2];
        ans = b - a;
        return ans;
    }
};
