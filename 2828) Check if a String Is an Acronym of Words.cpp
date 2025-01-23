class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = s.size();
        int m = words.size();
        if(n > m)
        {
            return false;
        }
        for(int i = 0; i < m; i++)
        {
            if(words[i][0] != s[i])
            {
                return false;
            }
        }
        return true;
    }
};
