class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int count = 1;
        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == s[i+1])
            {
                ++count;
                ans = max(ans, count);
            }
            else if(s[i] != s[i+1])
            {
                count = 1;
            }
        }
        return ans;
    }
};
