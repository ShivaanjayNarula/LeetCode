class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0;
        stack<char> st;
        for(char ch : s)
        {
            if(ch == 'b')
            {
                st.push(ch);
            }
            else if(ch == 'a')
            {
                if(!st.empty())
                {
                    st.pop();
                    ans++;
                }
            }
        }
        return ans;
    }
};
