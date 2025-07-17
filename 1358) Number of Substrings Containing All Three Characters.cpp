class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> prev(3, -1);
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            prev[s[i] - 'a'] = i;
            ans += *min_element(prev.begin(), prev.end()) + 1;
        }
        return ans;
    }
};
