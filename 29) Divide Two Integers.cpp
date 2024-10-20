class Solution {
public:
    int divide(int dividend, int divisor) {
        long long s = (long long)dividend / (long long)divisor;
        if((long long)dividend == INT_MIN && (long long)divisor == -1)
        {
            return INT_MAX;
        }
        if((long long)dividend == INT_MAX &&(long long)divisor == 1)
        {
            return INT_MAX;
        }
        return s;
    }
};
