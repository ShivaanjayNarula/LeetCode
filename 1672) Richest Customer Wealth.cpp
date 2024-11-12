class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int ans = INT_MIN;
        for(int i = 0; i < m; i++)
        {
            int check = 0;
            for(int j = 0; j < n; j++)
            {
                check += accounts[i][j];
            }
            ans = max(ans, check);
        }
        return ans;
    }
};
