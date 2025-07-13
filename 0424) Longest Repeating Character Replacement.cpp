class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int right = 0;
        int ans = 0;
        unordered_map<char, int> mp;
        int maxi = 0;
        while(right < n)
        {
            mp[s[right]]++;
            maxi = max(maxi, mp[s[right]]);
            if(right - left + 1 - maxi > k)
            {
                mp[s[left]]--;
                left++;
            }
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};
