class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int ans = 0;
        unordered_set<int> s(banned.begin(), banned.end());
        for(int i = 1; i <= n; i++)
        {
            if(s.find(i) == s.end() && maxSum - i >= 0)
            {
                ans++;
                maxSum -= i;
            }
        }
        return ans;
    }
};
