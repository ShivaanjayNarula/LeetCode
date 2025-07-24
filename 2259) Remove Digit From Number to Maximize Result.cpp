class Solution {
public:
    string removeDigit(string s, char digit) {
        int n = s.size();
        int id = -1;
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            string check = "";
            if(s[i] == digit)
            {
                check = s.substr(0, i) + s.substr(i+1);
                if(check > ans)
                {
                    ans = check;
                }
            }
        }
        return ans;
    }
};
