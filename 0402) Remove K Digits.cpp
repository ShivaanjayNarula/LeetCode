class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && k > 0 && st.top() > num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k > 0 && !st.empty())
        {
            st.pop();
            k--;
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        int id = 0;
        while(id < n-k && ans[id] == '0')
        {
            id++;
        }
        ans = ans.substr(id);
        if(ans == "")
        {
            return "0";
        }
        return ans;
    }
};
