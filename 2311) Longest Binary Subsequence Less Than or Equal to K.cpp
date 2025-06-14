class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        reverse(s.begin(), s.end());
        int ans = 0;
        int sum = 0;
        int power = 1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                ans++;
            }
            else if(sum + power <= k)
            {
                sum += power;
                ans++;
            }
            if(power <= k)
            {
                power <<= 1;
            }
        }
        return ans;
    }
};
