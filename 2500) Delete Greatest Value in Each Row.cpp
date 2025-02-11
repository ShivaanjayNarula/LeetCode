class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(auto &i : grid)
        {
            sort(i.begin(), i.end());
        }
        for(int i = 0; i < n; i++)
        {
            int add = 0;
            for(int j = 0; j < m; j++)
            {
                add = max(add, grid[j][i]);
            }
            ans += add;
        }
        return ans;
    }
};
