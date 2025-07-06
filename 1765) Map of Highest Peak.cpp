class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        vector<vector<int>> ans(m, vector<int>(n, m+n));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(isWater[i][j] == 1)
                {
                    ans[i][j] = 0;
                    continue;
                }
                if(i > 0)
                {
                    ans[i][j] = min(ans[i][j], ans[i-1][j] + 1);
                }
                if(j > 0)
                {
                    ans[i][j] = min(ans[i][j], ans[i][j-1] + 1);
                }
            }
        }
        for(int i = m-1; i >= 0; i--)
        {
            for(int j = n-1; j >= 0; j--)
            {
                if(i < m-1)
                {
                    ans[i][j] = min(ans[i][j], ans[i+1][j] + 1);
                }
                if(j < n-1)
                {
                    ans[i][j] = min(ans[i][j], ans[i][j+1] + 1);
                }
            }
        }
        return ans;
    }
};
