class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            int ch = s[i] - '0';
            if(i % 2 == 0)
            {
                ans += ch;
            }
            else
            {
                ans -= ch;
            }
        }
        return ans;
    }
};
