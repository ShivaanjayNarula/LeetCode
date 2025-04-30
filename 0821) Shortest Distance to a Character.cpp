class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int m = -n;
        vector<int> ans(n, n);
        for(int i = 0; i < n; i++)
        {
            if(s[i] == c)
            {
                m = i;
            }
            ans[i] = i - m;
        }
        for(int i = m-1; i >= 0; i--)
        {
            if(s[i] == c)
            {
                m = i;
            }
            ans[i] = min(ans[i], m - i);
        }
        return ans;
    }
};
