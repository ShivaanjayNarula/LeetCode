class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s.replace(i, 1, 1, s[i] + 'a' - 'A');
            }
        }
        return s;
    }
};
