class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        for(int i = 1; i < n; i++)
        {
            if(nums[i] == nums[i-1])
            {
                continue;
            }
            if(nums[i] < nums[i-1])
            {
                ans += i;
            }
            nums[i-1] = nums[i];
        }
        return ans;
    }
};
