class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans(n/3);
        for(int i = 0; i < n/3; i++)
        {
            if(nums[3*i+2] - nums[3*i] > k)
            {
                return {};
            }
            ans[i] = {nums[3*i], nums[3*i+1], nums[3*i+2]};
        }
        return ans;
    }
};
