class Solution {
public:
    int maxDistance(vector<vector<int>>& nums) {
        int n = nums.size();
        int mini = nums[0].front();
        int maxi = nums[0].back();
        int ans = INT_MIN;
        for(int i = 1; i < n; i++)
        {
            ans = max({ans, abs(nums[i].back() - mini), abs(nums[i].front() - maxi)});
            mini = min(mini, nums[i].front());
            maxi = max(maxi, nums[i].back());
        }
        return ans;
    }
};
