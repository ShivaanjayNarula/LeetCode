class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        if(n == 0)
        {
            return s;
        }
        int left = 0;
        int right = n-1;
        int end = n-1;
        while(left < right)
        {
            if(s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                left = 0;
                end--;
                right = end;
            }
        }
        string s2 = s.substr(end+1);
        reverse(s2.begin(), s2.end());
        return s2+s;
    }
};
