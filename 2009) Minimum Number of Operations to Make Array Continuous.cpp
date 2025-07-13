class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int len = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < n; i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[len] = nums[i];
                len++;
            }
        }
        int left = 0;
        int right = 0;
        int ans = INT_MAX;
        while(left < len)
        {
            while(right < len && nums[right] - nums[left] <= n-1)
            {
                right++;
            }
            ans = min(ans, n - (right - left));
            left++;
        }
        return ans;
    }
};
