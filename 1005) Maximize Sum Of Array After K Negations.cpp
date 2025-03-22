class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n && nums[i] < 0 && k > 0; i++)
        {
            nums[i] *= -1;
            k--;
        }
        int mini = INT_MAX;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            mini = min(mini, nums[i]);
            ans += nums[i];
        }
        if(k % 2 != 0)
        {
            ans -= mini * 2;
        }
        return ans;
    }
};
