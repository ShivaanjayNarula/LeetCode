class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string ans = "";
        n = s.size();
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && (n-i) % 3 == 0)
            {
                ans += ".";
            }
            ans += s[i];
        }
        return ans;
    }
};
