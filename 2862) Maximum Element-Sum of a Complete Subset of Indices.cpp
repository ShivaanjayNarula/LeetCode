class Solution {
public:
    long long maximumSum(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for(int i = 1; i <= n; i++)
        {
            long long add = 0;
            for(int j = 1; j*j*i <= n; j++)
            {
                add += nums[j*j*i - 1];
            }
            ans = max(ans, add);
        }
        return ans;
    }
};
