class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map<char, int> check;
        check['I'] = 1;
        check['V'] = 5;
        check['X'] = 10;
        check['L'] = 50;
        check['C'] = 100;
        check['D'] = 500;
        check['M'] = 1000;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(check[s[i]] >= check[s[i+1]])
            {
                ans += check[s[i]];
            }
            else
            {
                ans -= check[s[i]];
            }
        }
        return ans;
    }
};
