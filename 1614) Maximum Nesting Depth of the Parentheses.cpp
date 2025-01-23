class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        stack<char> st;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
            }
            else if(s[i] == ')')
            {
                int check = st.size();
                ans = max(ans, check);
                st.pop();
            }
        }
        return ans;
    }
};
