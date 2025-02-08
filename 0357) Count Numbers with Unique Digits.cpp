class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans = 1;
        if(n > 0)
        {
            int check;
            if(n > 10)
            {
                check = 10;
            }
            else
            {
                check = n;
            }
            for(int i = 0; i < check; i++)
            {
                ans += 9 * calculate(9, i);
            }
        }
        return ans;
    }
    int calculate(int n, int i)
    {
        if(i == 0)
        {
            return 1;
        }
        else
        {
            return n * calculate(n-1, i-1);
        }
    }
};
