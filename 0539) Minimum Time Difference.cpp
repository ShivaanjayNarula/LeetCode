class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        int ans = 1440;
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
        {
            nums[i] = stoi(timePoints[i].substr(0, 2)) * 60 + stoi(timePoints[i].substr(3, 5));
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++)
        {
            ans = min(ans, nums[i+1] - nums[i]);
        }
        ans = min(ans, nums[0] + 1440 - nums[n-1]);
        return ans;
    }
};
