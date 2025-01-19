class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int add = nums[0];
        int ans = nums[0];
        int i = 1;
        while(i < n)
        {
            if(nums[i] > nums[i-1])
            {
                add += nums[i];
            }
            else if(nums[i] <= nums[i-1])
            {
                add = nums[i];
            }
            ans = max(ans, add);
            i++;
        }
        return ans;
    }
};
