class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)
        {
            return 0;
        }
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j])
                {
                    left[i] = max(left[i], left[j] + 1);
                }
            }
        }
        for(int i = n-2; i >= 0; i--)
        {
            for(int j = n-1; j > i; j--)
            {
                if(nums[i] > nums[j])
                {
                    right[i] = max(right[i], right[j] + 1);
                }
            }
        }
        int check = 0;
        for(int i = 1; i < n-1; i++)
        {
            if(left[i] > 1 && right[i] > 1)
            {
                check = max(check, left[i] + right[i] - 1);
            }
        }
        return n - check;
    }
};
