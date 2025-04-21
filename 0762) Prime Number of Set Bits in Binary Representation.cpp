class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++)
        {
            int check = i;
            int count = 0;
            while(check)
            {
                check &= (check-1);
                count++;
            }
            if(isPrime(count))
            {
                ans++;
            }
            continue;
        }
        return ans;
    }
    bool isPrime(int n)
    {
        if(n < 2)
        {
            return false;
        }
        for(int i = 2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};
