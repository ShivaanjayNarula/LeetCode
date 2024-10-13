class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int m = words.size();
        vector<int> ans;
        for(int i = 0; i < m; i++)
        {
            int n = words[i].size();
            for(int j = 0; j < n; j++)
            {
                if(words[i][j] == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
