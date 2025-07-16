class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n < k)
        {
            return s;
        }
        stack<int> st;
        string ans = "";
        for(char ch : s)
        {
            if(!ans.empty() && ans.back() == ch)
            {
                st.top()++;
            }
            else
            {
                st.push(1);
            }
            ans.push_back(ch);
            if(st.top() == k)
            {
                for(int i = 0; i < k; i++)
                {
                    ans.pop_back();
                }
                st.pop();
            }
        }
        return ans;
    }
};
