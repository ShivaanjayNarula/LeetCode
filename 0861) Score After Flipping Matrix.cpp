class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = (1 << (n-1)) * m;
        for(int i = 1; i < n; i++)
        {
            int check = 0;
            for(int j = 0; j < m; j++)
            {
                check += grid[j][i] == grid[j][0];
            }
            ans += max(check, m-check) * (1 << (n-i-1));
        }
        return ans;
    }
};
