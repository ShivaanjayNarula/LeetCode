class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> mp;
        int ans = 1;
        for(char ch : s)
        {
            if(mp[ch] > 0)
            {
                ans++;
                mp.clear();
            }
            mp[ch] = 1;
        }
        return ans;
    }
};
