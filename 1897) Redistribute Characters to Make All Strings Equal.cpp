class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> mp;
        int m = words.size();
        int n = words.size();
        for(auto i : words)
        {
            for(auto j : i)
            {
                mp[j]++;
            }
        }
        for(auto i : mp)
        {
            if(i.second % m != 0)
            {
                return false;
            }
        }
        return true;
    }
};
