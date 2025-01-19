class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            s[left] = min(s[left], s[right]);
            s[right] = s[left];
            left++;
            right--;
        }
        return s;
    }
};
