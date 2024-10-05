class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min_num = INT_MAX;
        for(int i = 0; i < n-1; i++)
        {
            int diff = nums[i+1] - nums[i];
            min_num = min(min_num, diff);
        }
        vector<vector<int>> ans;
        for(int i = 0; i < n-1; i++)
        {
            if((nums[i+1] - nums[i]) == min_num)
            {
                ans.push_back({nums[i], nums[i+1]});
            }
        }
        return ans;
    }
};
