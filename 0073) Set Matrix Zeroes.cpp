class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> new_matrix = matrix;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k = 0; k < m; k++)
                    {
                        new_matrix[k][j] = 0;
                    }
                    for(int k = 0; k < n; k++)
                    {
                        new_matrix[i][k] = 0;
                    }
                }
            }
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                matrix[i][j] = new_matrix[i][j];
            }
        }
    }
};
