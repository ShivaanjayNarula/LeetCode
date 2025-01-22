class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans = (long long)k * (k + 1) / 2;
        for (int n : set<int>(begin(nums), end(nums)))
        {
            if (n <= k)
            {
                ans += (++k) - n;
            }
        }
        return ans;
    }
};
