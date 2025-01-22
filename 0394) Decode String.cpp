class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<string> c;
        stack<int> nums;
        string ans;
        int a = 0;
        for(char check : s)
        {
            if(isdigit(check))
            {
                a = a * 10 + (check-'0');
            }
            else if(isalpha(check))
            {
                ans.push_back(check);
            }
            else if(check == '[')
            {
                c.push(ans);
                nums.push(a);
                ans = "";
                a = 0;
            }
            else if(check == ']')
            {
                string temp = ans;
                for(int i = 0; i < nums.top()-1; i++)
                {
                    ans += temp;
                }
                ans = c.top() + ans;
                c.pop();
                nums.pop();
            }
        }
        return ans;
    }
};
