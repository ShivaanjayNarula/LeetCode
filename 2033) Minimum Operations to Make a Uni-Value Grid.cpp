class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> new_grid;
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                new_grid.push_back(grid[i][j]);
            }
        }
        sort(new_grid.begin(), new_grid.end());
        int mid = (m*n)/2;
        for(int i = 0; i < m*n; i++)
        {
            if(abs(new_grid[i] - new_grid[mid]) % x != 0)
            {
                return -1;
            }
            ans += abs(new_grid[i] - new_grid[mid]) / x;
        }
        return ans;
    }
};
