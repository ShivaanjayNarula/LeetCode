class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long ans = 0;
        unordered_map<long long, long long> count;
        for (long long i = 0; i < n; i++)
        {
            ans += i - count[i-nums[i]]++;
        }
        return ans;
    }
};
