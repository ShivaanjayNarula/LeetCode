class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        sort(nums.rbegin(), nums.rend());
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if(sum % k != 0)
        {
            return false;
        }
        int target = sum/k;
        vector<int> subsetSum(k, 0);
        return helper(0, k, target, nums, subsetSum);
    }
    bool helper(int id, int k, int target, vector<int> &nums, vector<int> &subsetSum)
    {
        int n = nums.size();
        if(id == n)
        {
            for(int i = 0; i < k; i++)
            {
                if(subsetSum[i] != target)
                {
                    return false;
                }
            }
            return true;
        }
        for(int i = 0; i < k; i++)
        {
            if(subsetSum[i] + nums[id] <= target)
            {
                subsetSum[i] += nums[id];
                if(helper(id+1, k, target, nums, subsetSum))
                {
                    return true;
                }
                subsetSum[i] -= nums[id];
                if(subsetSum[i] == 0)
                {
                    break;
                }
            }
        }
        return false;
    }
};
