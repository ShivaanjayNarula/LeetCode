class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        for(int i = 1; i < n; i++)
        {
            if(isupper(word[1]) != isupper(word[i]) || islower(word[0]) && isupper(word[i]))
            {
                return false;
           }
        }
    return true;
    }
};
