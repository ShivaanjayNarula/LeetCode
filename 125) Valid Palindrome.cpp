class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string k;
        for(int i = 0; i < n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] - 'A' + 'a';
                k += s[i];
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                k += s[i];
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                k += s[i];
            }
        }
        n = k.size();
        for(int i = 0; i < n/2; i++)
        {
            if(k[i] != k[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};
