class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n & 1 != 0)
        {
            return false;
        }
        int check1 = 0;
        int check2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(locked[i] == '0' || s[i] == '(')
            {
                check1++;
            }
            else
            {
                check1--;
            }
            if(check1 < 0)
            {
                return false;
            }
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(locked[i] == '0' || s[i] == ')')
            {
                check2++;
            }
            else
            {
                check2--;
            }
            if(check2 < 0)
            {
                return false;
            }
        }
        return true;
    }
};
