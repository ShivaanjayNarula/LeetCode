class Solution {
public:
    bool doesAliceWin(string s) {
        for(auto ch : s)
        {
            if(isVowel(ch))
            {
                return true;
            }
        }
        return false;
    }
    bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
        return false;
    }
};
