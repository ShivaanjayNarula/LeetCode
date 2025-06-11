class Solution {
public:
    int minSteps(int n) {
        int ans = 0;
        int i = 2;
        while(i*i <= n)
        {
            if(n % i == 0)
            {
                ans += i;
                n /= i;
            }
            else
            {
                i++;
            }
        }
        if(n != 1)
        {
            ans += n;
        }
        return ans;
    }
};
