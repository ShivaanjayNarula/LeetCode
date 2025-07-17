class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        vector<int> lps(n, 0);
        int j = 0;
        for(int i = 1; i < n; i++)
        {
            while(j > 0 && s[i] != s[j])
            {
                j = lps[j-1];
            }
            if(s[i] == s[j])
            {
                j++;
                lps[i] = j;
            }
        }
        string ans = "";
        for(int i = 0; i < lps[n-1]; i++)
        {
            ans += s[i];
        }
        return ans;
    }
};
