class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        int n = nums.size();
        int mod = 1e9 + 7;
        sort(nums.begin(), nums.end());
        long long count = 1;
        long long ans = 0;
        for(int i = 0; i < n; i++, count = count * 2 % mod)
        {
            ans = (ans + nums[i] * count - nums[n-i-1] * count) % mod;
        }
        return ans;
    }
};
