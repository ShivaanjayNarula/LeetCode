class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        for(int i = 0; i < m; i++)
        {
            int n = grid[i].size();
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                {
                    ans+=4;
                    if(i != 0 && grid[i-1][j] == 1)
                    {
                        ans-=2;
                    }
                    if(j != 0 && grid[i][j-1] == 1)
                    {
                        ans-=2;
                    }
                }
            }
        }
        return ans;
    }
};
