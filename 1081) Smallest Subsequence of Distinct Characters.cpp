class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();
        stack<char> st;
        vector<int> visit(26, 0);
        vector<int> count(26, 0);
        for(char ch : s)
        {
            count[ch - 'a']++;
        }
        for(char ch : s)
        {
            count[ch - 'a']--;

            if(visit[ch - 'a'])
            {
                continue;
            }
            while(!st.empty() && ch < st.top() && count[st.top() - 'a'] != 0)
            {
                visit[st.top() - 'a'] = 0;
                st.pop();
            }

            st.push(ch);
            visit[ch - 'a'] = 1;
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
