class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        map<vector<int>, int> mp;
        for(int i = 0; i < m; i++)
        {
            mp[grid[i]]++;
        }
        for(int i = 0; i < m; i++)
        {
            vector<int> check;
            for(int j = 0; j < n; j++)
            {
                check.push_back(grid[j][i]);
            }
            ans += mp[check];
        }
        return ans;
    }
};
