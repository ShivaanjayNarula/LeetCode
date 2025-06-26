class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int ans = n;
        unordered_map<char, int> mp;
        for(char ch : s)
        {
            mp[ch]++;
        }
        for(auto it : mp)
        {
            while(it.second >= 3)
            {
                ans -= 2;
                it.second -= 2;
            }
        }
        return ans;
    }
};
