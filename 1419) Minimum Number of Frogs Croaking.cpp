class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int n = croakOfFrogs.size();
        if(n % 5 != 0)
        {
            return -1;
        }
        int ans = 0;
        int count = 0;
        unordered_map<char, int> mp;
        for(auto ch : croakOfFrogs)
        {
            if(ch == 'c')
            {
                count++;
                mp[ch]++;
            }
            else if(ch == 'r' && mp['c'] > mp[ch])
            {
                mp[ch]++;
            }
            else if(ch == 'o' && mp['r'] > mp[ch])
            {
                mp[ch]++;
            }
            else if(ch == 'a' && mp['o'] > mp[ch])
            {
                mp[ch]++;
            }
            else if(ch == 'k' && mp['a'] > mp[ch])
            {
                ans = max(ans, count);
                count--;
                mp[ch]++;
            }
            else
            {
                return -1;
            }
        }
        if(count == 0)
        {
            return ans;
        }
        return -1;
    }
};
