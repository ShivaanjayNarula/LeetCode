class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return helper(nums, 0, 0);
    }
    int helper(vector<int> &nums, int id, int ans)
    {
        int n = nums.size();
        if(id == n)
        {
            return ans;
        }
        int take = helper(nums, id+1, ans^nums[id]);
        int notake = helper(nums, id+1, ans);
        return take + notake;
    }
};
