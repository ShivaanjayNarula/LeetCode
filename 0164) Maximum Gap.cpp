class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n == 0 || n == 1)
        {
            return 0;
        }
        int ans = -1;
        for(int i = 1; i < n; i++)
        {
            ans = max(ans, nums[i] - nums[i-1]);
        }
        return ans;
    }
};
