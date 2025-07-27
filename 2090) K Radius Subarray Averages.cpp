class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);
        if(n < 2*k+1)
        {
            return ans;
        }
        vector<long long> prefixSum(n+1, 0);
        for(int i = 0; i < n; i++)
        {
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        for(int i = k; i+k < n; i++)
        {
            ans[i] = (prefixSum[i+k+1] - prefixSum[i-k])/(2*k+1);
        }
        return ans;
    }
};
