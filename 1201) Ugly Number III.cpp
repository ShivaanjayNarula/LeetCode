class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        long long left = 0;
        long long right = INT_MAX;
        int ans = 0;
        while(left <= right)
        {
            long long mid = left + (right-left)/2;
            if(countUgly(mid, a, b, c) >= n)
            {
                ans = mid;
                right = mid-1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
    long long countUgly(long long num, int a, int b, int c)
    {
        return num/a + num/b + num/c - num/lcm(a,b) - num/lcm(b, c) - num/lcm(a, c) + num/lcm(a, lcm(b, c));
    }
    long long lcm(long long x, long y)
    {
        return (x*y/gcd(x, y));
    }
};
