class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(0, nums, ans);
        set<vector<int>> st(ans.begin(), ans.end());
        ans.assign(st.begin(), st.end());
        return ans;
    }
    void helper(int id, vector<int> &nums, vector<vector<int>> &ans)
    {
        int n = nums.size();
        if(id == n)
        {
            ans.push_back(nums);
            return;
        }
        for(int j = id; j < n; j++)
        {
            swap(nums[id], nums[j]);
            helper(id+1, nums, ans);
            swap(nums[id], nums[j]);
        }
    }
};
