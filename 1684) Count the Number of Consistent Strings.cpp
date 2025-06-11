class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        unordered_map<char, int> mp;
        for(auto ch : allowed)
        {
            mp[ch]++;
        }
        for(auto s : words)
        {
            bool check = false;
            for(auto ch : s)
            {
                if(mp.find(ch) == mp.end())
                {
                    check = true;
                    break;
                }
            }
            if(!check)
            {
                ans++;
            }
        }
        return ans;
    }
};
