class Solution {
public:
    int removePalindromeSub(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            if(s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                return 2;
            }
        }
        return 1;
    }
};
