class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            ans += max(check - nums[i], 0);
            check = max(nums[i], check) + 1;
        }
        return ans;
    }
};
