class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++)
        {
            unordered_set<int> s1;
            unordered_set<int> s2;
            for(int j = 0; j < n; j++)
            {
                if(s1.find(matrix[i][j]) != s1.end())
                {
                    return false;
                }
                s1.insert(matrix[i][j]);
                if(s2.find(matrix[j][i]) != s2.end())
                {
                    return false;
                }
                s2.insert(matrix[j][i]);
            }
        }
        return true;
    }
};
