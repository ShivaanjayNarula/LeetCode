class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        vector<long long> nums1(nums.begin(), nums.end());
        int n = nums.size();
        int m = s.size();
        int mod = 1e9 + 7;
        for(int i = 0; i < m; i++)
        {
            if(s[i] == 'L')
            {
                nums1[i] -= d;
            }
            else
            {
                nums1[i] += d;
            }
        }
        sort(nums1.begin(), nums1.end());
        vector<long long> prefixSum(nums1.begin(), nums1.end());
        for(int i = 1; i < n; i++)
        {
            prefixSum[i] += prefixSum[i-1];
            prefixSum[i] %= mod;
        }
        long long ans = 0;
        for(int i = 1; i < n; i++)
        {
            ans = (ans + (1LL * i * nums1[i] - prefixSum[i-1]) % mod) % mod;
        }
        return ans % mod;
    }
};
