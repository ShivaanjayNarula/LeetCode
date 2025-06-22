class Solution {
public:
    bool checkValidString(string s) {
        int open = 0;
        int close = 0;
        for(char ch : s)
        {
            if(ch == '(')
            {
                open++;
                close++;
            }
            else if(ch == ')')
            {
                open--;
                close--;
            }
            else if(ch == '*')
            {
                open++;
                close--;
            }
            close = max(0, close);
            if(open < 0)
            {
                return false;
            }
        }
        if(close == 0)
        {
            return true;
        }
        return false;
    }
};
