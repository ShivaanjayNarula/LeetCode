class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        int n = s.size();
        int i = 0;
        while(i < n)
        {
            if(s[i] == ')' && ans.size() > 0 && ans.top() == '(')
            {
                ans.pop();
            }
            else if(s[i] == '}' && ans.size() > 0 && ans.top() == '{')
            {
                ans.pop();
            }
            else if(s[i] == ']' && ans.size() > 0 && ans.top() == '[')
            {
                ans.pop();
            }
            else
            {
                ans.push(s[i]);
            }
            i++;
        }
        if(ans.size() == 0)
        {
            return true;
        }
        return false;
    }
};
