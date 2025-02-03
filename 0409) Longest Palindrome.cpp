class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int add = 0;
        int ans = n;
        unordered_map<char, int> mp;
        for(auto ch : s)
        {
            mp[ch]++;
            if(mp[ch] % 2 == 1)
            {
                add++;
            }
            else
            {
                add--;
            }
        }
        if(add > 1)
        {
            ans = ans - add + 1;
        }
        return ans;
    }
};
