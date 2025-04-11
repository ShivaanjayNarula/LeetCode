class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<bool> ans;
        vector<int> check(1, 0);
        int j = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] % 2 == nums[i-1] % 2)
            {
                j++;
            }
            check.push_back(j);
        }
        for(auto i : queries)
        {
            if(check[i[0]] == check[i[1]])
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
