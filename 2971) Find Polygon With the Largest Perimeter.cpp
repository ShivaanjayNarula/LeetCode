class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            ans += nums[i];
        }
        for(int i = n-1; i > 1; i--)
        {
            ans -= nums[i];
            if(ans > nums[i])
            {
                return ans + nums[i];
            }
        }
        return -1;
    }
};
