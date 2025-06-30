class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left < right && s[left] == s[right])
        {
            char ch = s[left];
            while(left <= right && ch == s[left])
            {
                left++;
            }
            while(left <= right && ch == s[right])
            {
                right--;
            }
        }
        return right - left + 1;
    }
};
