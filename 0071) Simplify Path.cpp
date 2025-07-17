class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;
        string ans = "";
        while(path[n] == '/')
        {
            n -= 1;
        }
        for(int i = 0; i < n; i++)
        {
            string temp = "";
            if(path[i] == '/')
            {
                continue;
            }
            while(i < n && path[i] != '/')
            {
                temp += path[i];
                i+=1;
            }
            if(temp == ".")
            {
                continue;
            }
            else if(temp == "..")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(temp);
            }
        }
        while(!st.empty())
        {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        if(ans.size() == 0)
        {
            return "/";
        }
        return ans;
    }
};
