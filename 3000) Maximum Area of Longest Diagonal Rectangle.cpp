class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int m = dimensions.size();
        int n = dimensions[0].size();
        int ans = 0;
        double max_diagonal = 0;
        for(int i = 0; i < m; i++)
        {
            double diagonal = sqrt(dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]);
            if(diagonal > max_diagonal)
            {
                max_diagonal = diagonal;
                ans = dimensions[i][0] * dimensions[i][1];
            }
            else if(diagonal == max_diagonal)
            {
                ans = max(ans, dimensions[i][0] * dimensions[i][1]);
            }
        }
        return ans;
    }
};
