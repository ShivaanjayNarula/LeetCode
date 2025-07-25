class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int check1 = nums.back() - nums[2];
        int check2 = nums[n-3] - nums[0];
        int check3 = nums[n-2] - nums[1];
        int ans = min({check1, check2, check3});
        return ans;
    }
};
