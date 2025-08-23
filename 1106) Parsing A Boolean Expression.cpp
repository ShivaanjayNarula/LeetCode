class Solution {
public:
    bool parseBoolExpr(string expression) {
        int n = expression.size();
        stack<char> st;
        for(char ch : expression)
        {
            if(ch == '.' || ch == '(')
            {
                continue;
            }
            if(ch == 't' || ch == 'f' || ch == '!' || ch == '|' || ch == '&')
            {
                st.push(ch);
            }
            if(ch == ')')
            {
                bool check1 = false;
                bool check2 = false;
                while(st.top() != '!' && st.top() != '|' && st.top() != '&')
                {
                    if(st.top() == 't')
                    {
                        check1 = true;
                    }
                    if(st.top() == 'f')
                    {
                        check2 = true;
                    }
                    st.pop();
                }
                char temp = st.top();
                st.pop();
                if(temp == '!')
                {
                    if(check1 == true)
                    {
                        st.push('f');
                    }
                    else
                    {
                        st.push('t');
                    }
                }
                if(temp == '&')
                {
                    if(check2 == true)
                    {
                        st.push('f');
                    }
                    else
                    {
                        st.push('t');
                    }
                }
                if(temp == '|')
                {
                    if(check1 == true)
                    {
                        st.push('t');
                    }
                    else
                    {
                        st.push('f');
                    }
                }
            }
        }
        if(st.top() == 't')
        {
            return true;
        }
        return false;
    }
};
