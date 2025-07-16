class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                if(check > 0)
                {
                    ans += s[i];
                }
                check++;
            }
            else if(s[i] == ')')
            {
                check--;
                if(check > 0)
                {
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};
