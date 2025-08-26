class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int n = s.size();
        int check1 = 0;
        int check2 = 0;
        for(int i = 0; i < n; i++)
        {
            check1 += (s[i] - '0');
            check2 += (target[i] - '0');
        }
        if(check1 > 0 && check2 > 0)
        {
            return true;
        }
        if(check1 == 0 && check2 == 0)
        {
            return true;
        }
        return false;
    }
};
