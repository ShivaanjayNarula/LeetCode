class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        bool check = false;
        long long mini = INT_MAX;
        int m = matrix.size();
        int n = matrix[0].size();
        long long ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] < 0)
                {
                    check = !check;
                }
                ans += abs(matrix[i][j]);
                mini = min(mini, (long long)abs(matrix[i][j]));
            }
        }
        if(check == true)
        {
            ans -= 2 * mini;
        }
        return ans;
    }
};
