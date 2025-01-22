class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans = 0;
        for(auto ch : s)
        {
            ans += (ch == c);
        }
        ans = ans * (ans+1)/2;
        return ans;
    }
};
