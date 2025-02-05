class Solution {
public:
    int calculate(string s) {
        int ans = 0;
        int num = 0;
        int n = s.size();
        stack<int> st1;
        stack<int> st2;
        int sign = 1;
        for (char c : s)
        {
            if(isdigit(c))
            {
                num = num * 10 + (c - '0');
            }
            else if(c == '+' || c == '-')
            {
                ans += sign * num;
                num = 0;
                if (c == '+')
                {
                    sign = 1;
                }
                else if (c == '-')
                {
                    sign = -1;
                }
            }
            else if(c == '(')
            {
                st1.push(ans);
                st2.push(sign);
                ans = 0;
                sign = 1;
            }
            else if (c == ')')
            {
                ans += sign * num;
                num = 0;
                ans = st2.top() * ans + st1.top();
                st2.pop();
                st1.pop();
            }
        }
        ans += sign * num;
        return ans;
    }
};
