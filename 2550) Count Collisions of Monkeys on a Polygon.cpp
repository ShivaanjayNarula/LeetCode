class Solution {
public:
    int monkeyMove(int n) {
        long long mod = 1e9 + 7;
        long long ans = modExp(2, n, mod);
        return (ans - 2 + mod) % mod;
    }
    int modExp(long long base, long long exp, long long mod)
    {
        long long ans = 1;
        while(exp > 0)
        {
            if(exp % 2 == 1)
            {
                ans = (ans * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return ans;
    }
};
