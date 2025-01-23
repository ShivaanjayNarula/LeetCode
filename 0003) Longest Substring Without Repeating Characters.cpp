class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int ans = 0;
        int left = 0;
        for(int right = 0; right < n; right++)
        {
            if(mp.count(s[right]) == 0 || mp[s[right]] < left)
            {
                mp[s[right]] = right;
                ans = max(ans, right-left+1);
            }
            else
            {
                left = mp[s[right]] + 1;
                mp[s[right]] = right;
            }
        }
        return ans;
    }
};
