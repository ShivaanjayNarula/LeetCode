class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int a = INT_MAX;
        for(int i = 0; i < n-2; i++)
        {
            for(int j = i+1; j < n-1; j++)
            {
                for(int k = j+1; k < n; k++)
                {
                    if(nums[i] < nums[j] && nums[j] > nums[k])
                    {
                        a = min(a, nums[i] + nums[j] + nums[k]);
                    }
                }
            }
        }
        if(a == INT_MAX)
        {
            return -1;
        }
        return a;
    }
};
