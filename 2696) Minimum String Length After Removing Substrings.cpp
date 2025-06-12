class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(char ch : s)
        {
            if(!st.empty())
            {
                if(st.top() == 'A' && ch == 'B')
                {
                    st.pop();
                    continue;
                }
                if(st.top() == 'C' && ch == 'D')
                {
                    st.pop();
                    continue;
                }
            }
            st.push(ch);
        }
        return st.size();
    }
};
