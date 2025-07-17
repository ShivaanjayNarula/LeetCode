class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums(9);
        for(int i = 0; i < 9; i++)
        {
            nums[i] = i+1;
        }
        vector<vector<int>> ans;
        vector<int> check;
        helper(0, k, n, check, nums, ans);
        return ans;
    }
    void helper(int id, int k, int target, vector<int> &check, vector<int> &nums, vector<vector<int>> &ans)
    {
        int n = nums.size();
        if(target == 0 && check.size() == k)
        {
            ans.push_back(check);
            return;
        }
        if(check.size() > k)
        {
            return;
        }
        for(int i = id; i < n; i++)
        {
            if(nums[i] > target)
            {
                break;
            }
            if(i > id && nums[i] == nums[i-1])
            {
                continue;
            }
            check.push_back(nums[i]);
            helper(i+1, k, target - nums[i], check, nums, ans);
            check.pop_back();
        }
    }
};
