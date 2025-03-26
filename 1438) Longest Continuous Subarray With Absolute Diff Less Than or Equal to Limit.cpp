class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int left = 0;
        int right = 0;
        int n = nums.size();
        int mini = 0;
        int maxi = 0;
        int ans = 1;
        while(right < n)
        {
            if(left == right)
            {
                right++;
                continue;
            }
            if(nums[right] <= nums[mini])
            {
                mini = right;
            }
            if(nums[right] >= nums[maxi])
            {
                maxi = right;
            }
            if(nums[maxi] - nums[mini] <= limit)
            {
                right++;
            }
            else
            {
                ans = max(ans, right - left);
                left = min(mini, maxi) + 1;
                mini = left;
                maxi = left;
                right = left + 1;
            }
        }
        ans = max(ans, right - left);
        return ans;
    }
};
