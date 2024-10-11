class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int count[100] = {};
        for(int i = lowLimit; i <= highLimit; i++)
        {
            int sum = 0;
            int n = i;
            while(n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            count[sum]++;
        }
        return *max_element(begin(count), end(count));
    }
};
