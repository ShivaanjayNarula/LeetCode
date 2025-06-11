class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            if(m[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
