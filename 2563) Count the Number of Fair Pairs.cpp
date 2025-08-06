class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        ans = check(nums, upper) - check(nums, lower-1);
        return ans;
    }
    long long check(vector<int> &nums, int val)
    {
        int n = nums.size();
        long long ans = 0;
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            while(left < right && nums[left] + nums[right] > val)
            {
                right--;
            }
            ans += right - left;
            left++;
        }
        return ans;
    }
};
