class Solution {
public:
    int countDigitOne(int n) {
        int ans = 0;
        for(long long i = 1; i <= n; i *= 10)
        {
            int a = n / i;
            int b = n % i;
            ans += (a + 8) / 10 * i;
            if (a % 10 == 1)
            {
                ans += (b + 1);
            }
        }
        return ans;
    }
};
