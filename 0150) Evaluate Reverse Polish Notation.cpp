class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto i : tokens)
        {
            if(i == "+" || i == "-" || i == "*" || i == "/")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if(i == "+")
                {
                    a = b+a;
                }
                else if(i == "-")
                {
                    a = b-a;
                }
                else if(i == "*")
                {
                    a = b*a;
                }
                else if(i == "/")
                {
                    a = b/a;
                }
                s.push(a);
            }
            else
            {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};
