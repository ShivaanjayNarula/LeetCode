class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        int i = n-1;
        int j = n-1;
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            if(i+2 < n && s[i+2] == '#')
            {
                int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += 'a' + num - 1;
                i += 2;
            }
            else
            {
                ans += 'a' + s[i] - '0' - 1;
            }
        }
        return ans; 
    }
};
