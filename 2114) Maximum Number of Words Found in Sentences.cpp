class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans = 0;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            int m = s[i].size();
            int count = 1;
            for(int j = 0; j < m; j++)
            {
                if(s[i][j] == ' ')
                {
                    count++;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
