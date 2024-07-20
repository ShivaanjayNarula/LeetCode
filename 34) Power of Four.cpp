class Solution {
public:
    bool isPowerOfFour(int n) {
        int i = 1;
        while(n > i)
        {
            if(n % 4 != 0)
            {
                return false;
            }
            n = n / 4;
        }
        if(n <= 0)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        return true;
    }
};