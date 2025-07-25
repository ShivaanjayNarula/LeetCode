class Solution {
public:
    int superpalindromesInRange(string left, string right) {
        long long l = stoll(left);
        long long r = stoll(right);
        int ans = 0;
        for(int i = 1; i < 100000; i++)
        {
            string s = to_string(i);
            for(int j = s.size() - 2; j >= 0; j--)
            {
                s += s[j];
            }
            long long check = stoll(s);
            check *= check;
            if(check > r)
            {
                break;
            }
            if(check >= l && isPalindrome(check))
            {
                ans++;
            }
        }
        for(int i = 1; i < 100000; i++)
        {
            string s = to_string(i);
            for(int j = s.size() - 1; j >= 0; j--)
            {
                s += s[j];
            }
            long long check = stoll(s);
            check *= check;
            if(check > r)
            {
                break;
            }
            if(check >= l && isPalindrome(check))
            {
                ans++;
            }
        }
        return ans;
    }
    bool isPalindrome(long long check)
    {
        if(check == reverse(check))
        {
            return true;
        }
        return false;
    }
    long long reverse(long long check)
    {
        long long ans = 0;
        while(check > 0)
        {
            ans = 10 * ans + check % 10;
            check /= 10;
        }
        return ans;
    }
};
