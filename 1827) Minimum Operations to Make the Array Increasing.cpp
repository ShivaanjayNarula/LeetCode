class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int m = nums[0];
        for(int i = 1; i < n; i++)
        {
            if(nums[i] <= m)
            {
                ans += m - nums[i]  + 1;
                m++;
            }
            else
            {
                m = nums[i];
            }
        }
        return ans;
    }
};
