class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> ans(n, 0);
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ans[j] = max(ans[j], check(grid[i][j]));
            }
        }
        return ans;
    }
    int check(int n)
    {
        if(n == 0)
        {
            return 1;
        }
        int count = 0;
        if(n < 0)
        {
            count++;
            
        }
        n = abs(n);
        while(n)
        {
            count++;
            n /= 10;
        }
        return count;
    }
};
