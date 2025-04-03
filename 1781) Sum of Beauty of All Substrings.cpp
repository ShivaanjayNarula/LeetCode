class Solution {
public:
    int beautySum(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int ans = 0;
        int n = s.size();
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                char ch = s[j];
                mp[ch]++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                for(auto check : mp)
                {
                    mini = min(mini, check.second);
                    maxi = max(maxi, check.second);
                }
                ans += maxi - mini;
            }
            mp.clear();
        }
        return ans;
    }
};
