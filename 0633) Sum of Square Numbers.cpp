class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        while(i <= j)
        {
            if((long long)i*i + (long long)j*j == c)
            {
                return true;
            }
            else if((long long)i*i + (long long)j*j < c)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};
