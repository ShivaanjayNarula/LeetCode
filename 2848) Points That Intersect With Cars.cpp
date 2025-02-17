class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(auto i : nums)
        {
            for(int j = i[0]; j <= i[1]; j++)
            {
                if(find(ans.begin(), ans.end(), j) == ans.end())
                {
                    ans.push_back(j);
                }
            }
        }
        return ans.size();
    }
};
