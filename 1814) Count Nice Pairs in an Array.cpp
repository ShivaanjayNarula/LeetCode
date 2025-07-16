class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int mod = 1e9 + 7;
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int diff = nums[i] - rev(nums[i]);
            ans  = (ans + mp[diff]) % mod;
            mp[diff]++;
        }
        return ans;
    }
    int rev(int n)
    {
        int ans = 0;
        while(n > 0)
        {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
};
