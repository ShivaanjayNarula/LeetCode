class Solution {
public:
    bool squareIsWhite(string s) {
        if(s[0] % 2 == 0 && s[1] % 2 != 0)
        {
            return true;
        }
        if(s[0] % 2 != 0 && s[1] % 2 == 0)
        {
            return true;
        }
        return false;
    }
};
