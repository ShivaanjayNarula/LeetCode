class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int one = 0;
        int index = 0;
        for(int i = 0; i < m; i++)
        {
            int check = 0;
            for(int j = 0; j < n; j++)
            {
                if(mat[i][j] == 1)
                {
                    check++;
                }
                if(check > one)
                {
                    one = check;
                    index = i;
                }
            }
        }
        return {index, one};
    }
};
