class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        if(n <= 2)
        {
            return {};
        }
        vector<bool> isPrime(n+1, true);
        sieve(isPrime, n);
        vector<vector<int>> ans;
        for(int i = 2; i <= n/2; i++)
        {
            if(isPrime[i] && isPrime[n-i])
            {
                ans.push_back({i, n-i});
            }
        }
        return ans;
    }
    void sieve(vector<bool> &isPrime, int n)
    {
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i*i <= n; i++)
        {
            if(isPrime[i])
            {
                for(int j = i*i; j <= n; j+=i)
                {
                    isPrime[j] = false;
                }
            }
        }
    }
};
