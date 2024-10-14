class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        string ans;
        ans += s[0];
        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1] && s[i] == s[i+1])
            {
                //ans = ans + s[i];
                //i++;
                continue;
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};
