class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<long long, long long> mp;
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            long long check = gcd(nums[i], k);
            for(auto it : mp)
            {
                if((check * it.first) % k == 0)
                {
                    ans += it.second;
                }
            }
            mp[check]++;
        }
        return ans;
    }
};
