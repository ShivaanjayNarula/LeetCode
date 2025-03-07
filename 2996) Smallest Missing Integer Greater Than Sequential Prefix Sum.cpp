class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for(int i = 1; i < n; i++)
        {
            if(nums[i-1] + 1 == nums[i])
            {
                ans += nums[i];
            }
            else
            {
                break;
            }
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(ans == nums[i])
            {
                ans++;
            }
        }
        return ans;
    }
};
