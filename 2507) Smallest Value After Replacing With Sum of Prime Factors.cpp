class Solution {
public:
    int smallestValue(int n) {
        int ans = prime(n);
        if(ans == n)
        {
            return ans;
        }
        return smallestValue(ans);
    }
    int prime(int n)
    {
        int ans = 0;
        for(int i = 2; n > 1; i++)
        {
            while(n % i == 0)
            {
                ans += i;
                n /= i;
            }
        }
        return ans;
    }
};
