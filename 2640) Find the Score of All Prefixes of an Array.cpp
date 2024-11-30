class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n, 0);
        ans[0] = nums[0] * 2;
        long long add = nums[0];
        for(int i = 1; i < n; i++)
        {
            add = max(add, nums[i]*1LL);
            ans[i] = add + nums[i];
            ans[i] += ans[i-1];
        }
        return ans;
    }
};
