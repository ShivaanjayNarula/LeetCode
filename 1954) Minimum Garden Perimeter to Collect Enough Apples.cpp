class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long left = 1;
        long long right = 1e5;
        while(left < right)
        {
            long long mid = left + (right-left)/2;
            if(2 * mid * (mid+1) * (2*mid+1) < neededApples)
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return left*8;
    }
};
