class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        for(auto &it : box)
        {
            int i = n-1;
            for(int j = n-1; j >= 0; j--)
            {
                if(it[j] == '#')
                {
                    swap(it[i], it[j]);
                    i--;
                }
                else if(it[j] == '*')
                {
                    i = j-1;
                }
            }
        }
        vector<vector<char>> ans(n, vector<char>(m));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ans[j][m-i-1] = box[i][j];
            }
        }
        return ans;
    }
};
