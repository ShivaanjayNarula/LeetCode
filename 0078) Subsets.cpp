class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};
        for(auto i : nums)
        {
            int n = ans.size();
            for(int j = 0; j < n; j++)
            {
                ans.push_back(ans[j]);
                ans.back().push_back(i);
            }
        }
        return ans;
    }
};
