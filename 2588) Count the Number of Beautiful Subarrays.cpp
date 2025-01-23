class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int, int> mp{{0,1}};
        long long ans = 0;
        long long check = 0;
        for(auto i : nums)
        {
            ans += mp[check ^= i]++;
        }
        return ans;
    }
};
