class Solution {
public:
    long long numberOfWays(string s) {
        int n = s.size();
        long long zero = 0;
        long long one = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        long long count1 = 0;
        long long count2 = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                ans += count1 * one;
                zero--;
                count2++;
            }
            else
            {
                ans += count2 * zero;
                one--;
                count1++;
            }
        }
        return ans;
    }
};
