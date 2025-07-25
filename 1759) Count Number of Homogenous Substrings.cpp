class Solution {
public:
    int countHomogenous(string s) {
        int n = s.size();
        int mod = 1e9+7;
        int left = 0;
        int right = 0;
        long long ans = 0;
        while(right < n)
        {
            if(s[left] != s[right])
            {
                left = right;
            }
            ans = (ans + (right - left + 1) % mod) % mod;
            right++;
        }
        return ans;
    }
};
