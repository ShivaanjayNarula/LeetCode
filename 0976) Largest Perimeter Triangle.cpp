class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());
        //reverse(nums.begin(), nums.end());
        for(int i = 0; i < n-2; i++)
        {
            if(nums[i] < nums[i+1] + nums[i+2])
            {
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};
