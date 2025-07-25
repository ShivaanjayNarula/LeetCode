class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        for(int i = 1; i < n; i++)
        {
            prefix[i] +=  prefix[i-1] + nums[i-1];
        }
        for(int i = n-2; i >= 0; i--)
        {
            suffix[i] += suffix[i+1] + nums[i+1];
        }
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++)
        {
            ans[i] = ((nums[i] * i) - prefix[i]) + (suffix[i] - (nums[i] * (n - i - 1)));
        }
        return ans;
    }
};
