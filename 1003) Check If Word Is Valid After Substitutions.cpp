class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(s[0] != 'a')
        {
            return false;
        }
        stack<char> st;
        for(int i = 0; i < n; i++)
        {
            char ch = s[i];
            if(ch == 'a')
            {
                st.push(ch);
            }
            else if(!st.empty() && st.top() == 'a' && ch == 'b')
            {
                st.push(ch);
            }
            else if(!st.empty() && st.top() == 'b' && ch == 'c')
            {
                st.pop();
                st.pop();
            }
            else
            {
                return false;
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};
