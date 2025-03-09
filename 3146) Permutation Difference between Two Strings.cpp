class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mp;
        int m = s.size();
        int n = t.size();
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            mp[s[i]] = i;
        }
        for(int i = 0; i < n; i++)
        {
            ans += abs(i - mp[t[i]]);
        }
        return ans;
    }
};
