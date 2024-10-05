class Solution {
public:
    int integerReplacement(int a) {
        int count = 0;
        long long n = a;
        while(n > 1)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                if((n+1) % 4 == 0 && n > 3)
                {
                    n = n + 1;
                }
                else
                {
                    n = n - 1;
                }
            }
            count++;
        }
        return count;
    }
};
