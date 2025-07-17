class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        int count = 0;
        while(left <= right)
        {
            if(s[left] != s[right])
            {
                return helper(left+1, right, s) || helper(left, right-1, s);
            }
            left++;
            right--;
        }
        return true;
    }
    bool helper(int left, int right, string &s)
    {
        while(left <= right)
        {
            if(s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
