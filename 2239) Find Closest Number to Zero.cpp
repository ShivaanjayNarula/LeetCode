class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for(int i = 0; i < n; i++)
        {
            int a = abs(ans - 0);
            int b = abs(nums[i] - 0);
            if(b < a)
            {
                ans = nums[i];
            }
            if(a == b)
            {
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};
