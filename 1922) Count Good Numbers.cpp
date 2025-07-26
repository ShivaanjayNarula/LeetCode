class Solution {
public:
    int countGoodNumbers(long long n) {
        int mod = 1e9 + 7;
        long long check1 = helper(5, (n+1)/2);
        long long check2 = helper(4, n/2);
        return (check1 * check2) % mod;
    }
    long long helper(long long base, long long power)
    {
        int mod = 1e9 + 7;
        long long ans = 1;
        while(power > 0)
        {
            if(power % 2 != 0)
            {
                ans = (ans * base) % mod;
            }
            base = (base * base) % mod;
            
            power /= 2;
        }
        return ans;
    }
};
