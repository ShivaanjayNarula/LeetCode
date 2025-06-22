class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n < k)
        {
            return false;
        }
        unordered_map<char, int> mp;
        for(char ch : s)
        {
            mp[ch]++;
        }
        int check = 0;
        for(auto it : mp)
        {
            if(it.second % 2 != 0)
            {
                check++;
            }
        }
        if(check <= k)
        {
            return true;
        }
        return false;
    }
};
