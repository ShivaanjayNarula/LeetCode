class Solution {
public:
    string reverseParentheses(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = s.size();
        stack<string> st;
        string ans;
        for(auto ch : s)
        {
            if(ch == '(')
            {
                st.push(ans);
                ans.clear();
            }
            else if(ch == ')')
            {
                reverse(ans.begin(), ans.end());
                ans = st.top() + ans;
                st.pop();
            }
            else
            {
                ans += ch;
            }
        }
        return ans;
    }
};
