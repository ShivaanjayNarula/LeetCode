class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];
            if(mp1.find(ch1) != mp1.end())
            {
                if(ch2 != mp1[ch1])
                {
                    return false;
                }
            }
            else
            {
                if(mp2.find(ch2) != mp2.end())
                {
                    return false;
                }
            }
            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        return true;
    }
};
