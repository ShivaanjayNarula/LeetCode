class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        int mod = 1e9+7;
        vector<int> ans(n,1);
        ans[0] = 1;
        for(int i = 0; i < k; i++)
        {
            for(int j = 1; j < n; j++)
            {
                ans[j] = (ans[j] + ans[j-1]) % mod;
            }
        }
        return ans[n-1];
    }
};
