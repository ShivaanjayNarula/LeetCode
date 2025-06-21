class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0];
        int maxi = nums[0];
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < mini)
            {
                ans = i;
                mini = maxi;
            }
            maxi = max(maxi, nums[i]);
        }
        return ans+1;
    }
};
