class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> ans((n+k-1) / k, string(k, fill));
        for(int i = 0; i < n; i++)
        {
            ans[i/k][i%k] = s[i];
        }
        return ans;
    }
};
