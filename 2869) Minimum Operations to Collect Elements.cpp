class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = n-1; i >= 0; i--)
        {
            if(abs(nums[i]) <= k)
            {
                if(nums[abs(nums[i]) - 1] < 0)
                {
                    continue;
                }
                else
                {
                    count++;
                    nums[abs(nums[i]) - 1] *= -1;
                    if(count == k)
                    {
                        return n-i;
                    }
                }
            }
        }
        return -1;
    }
};
