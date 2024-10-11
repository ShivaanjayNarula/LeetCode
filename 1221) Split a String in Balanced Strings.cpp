class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'R')
            {
                right++;
            }
            else if(s[i] == 'L')
            {
                left++;
            }
            if(left == right)
            {
                ans++;
            }
        }
        return ans;
    }
};
