class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0;
        int n = nums.size();
        int index = -1;
        int valid = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > right)
            {
                index = i;
            }
            if(nums[i] >= left && nums[i] <= right)
            {
                valid = i;
            }
            if(valid > index)
            {
                ans += (valid - index);
            }
        }
        return ans;
    }
};
