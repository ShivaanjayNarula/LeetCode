class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num1 < num2)
        {
            return -1;
        }
        for(int steps = 0; steps <= 40; steps++)
        {
            long long diff = num1 - (num2 * 1LL * steps);
            int bits = countbits(diff);
            if(bits <= steps && steps <= diff)
            {
                return steps;
            }
        }
        return -1;
    }
    int countbits(long long n)
    {
        int bits = 0;
        while(n > 0)
        {
            bits += n&1;
            n >>= 1;
        }
        return bits;
    }
};
