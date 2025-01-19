class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        vector<int> check(26);
        for(int i = 0; i < n; i++)
        {
            check[s[i] - 'a']++;
            if(check[s[i] - 'a'] > 1)
            {
                return s[i];
            }
        }
        return 'a';
    }
};
