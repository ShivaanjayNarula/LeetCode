class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] % 2 == 0)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(nums[i] - ((nums[i] + 1) & (-nums[i]-1)) / 2);
            }
        }
        return ans;
    }
};
