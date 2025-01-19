class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ' ')
            {
                if(i > check)
                {
                    ans = s.substr(check, i-check) + " " + ans;
                }
                check = i + 1;
            }
            else if(i == n-1)
            {
                ans = s.substr(check, n-check) + " " + ans;
            }
        }
        return ans.substr(0, ans.size()-1);
    }
};
