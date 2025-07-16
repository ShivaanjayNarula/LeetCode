class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int mod = 1337;
        int ans = 1;
        int n = b.size();
        for(int i = n-1; i >= 0; i--)
        {
            ans = (ans * pow(a, b[i])) % mod;
            a = pow(a, 10) % mod;
        }
        ans %= mod;
        return ans;
    }
    int pow(int a, int b)
    {
        int mod = 1337;
        int ans = 1;
        a %= mod;
        for(int i = 0; i < b; i++)
        {
            ans = (ans * a) % mod;
        }
        return ans;
    }
};
