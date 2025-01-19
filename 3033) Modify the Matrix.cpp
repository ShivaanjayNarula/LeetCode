class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < n; i++)
        {
            int replace = -1;
            for(int j = 0; j < m; j++)
            {
                replace = max(replace, matrix[j][i]);
            }
            for(int j = 0; j < m; j++)
            {
                if(matrix[j][i] == -1)
                {
                    matrix[j][i] = replace;
                }
            }
        }
        return matrix;
    }
};
