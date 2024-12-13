class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int m = g.size();
        int n = s.size();
        int ans = 0;
        int j = 0;
        for(int i = 0; i < m && j < n;)
        {
            if(g[i] <= s[j])
            {
                i++;
                j++;
                ans++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};
