class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        stack<char> st;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if(i+1 < n && s[i+1] == ')')
                {
                    i++;
                }
                else
                {
                    ans++;
                }
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    ans++;
                }
            }
        }
        ans += st.size() * 2;
        return ans;
    }
};
