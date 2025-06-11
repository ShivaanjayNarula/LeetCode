class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int a = 0;
            int b = 0;
            int c = 0;
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j])
                {
                    a++;
                }
                b = max(b, grid[i][j]);
                c = max(c, grid[j][i]);
            }
            ans += a + b + c;
        }
        return ans;
    }
};
