class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> ans;
        sort(nums.rbegin(), nums.rend());
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        vector<int> prefixsum(n);
        prefixsum[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            prefixsum[i] = prefixsum[i-1] + nums[i];
        }
        for(int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
            if(prefixsum[i] > sum - prefixsum[i])
            {
                break;
            }
        }
        return ans;
    }
};
