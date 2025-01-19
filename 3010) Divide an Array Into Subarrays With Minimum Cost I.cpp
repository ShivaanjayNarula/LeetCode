class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int max1 = INT_MAX;
        int max2 = INT_MAX;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] < max1)
            {
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] < max2)
            {
                max2 = nums[i];
            }
        }
        ans += max1;
        ans += max2;
        return ans;
    }
};
