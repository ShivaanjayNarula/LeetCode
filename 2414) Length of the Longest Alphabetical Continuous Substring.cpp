class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.size();
        if(n == 0)
        {
            return 0;
        }
        int j = 0;
        int ans = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[j] + (i - j))
            {
                j = i;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};
