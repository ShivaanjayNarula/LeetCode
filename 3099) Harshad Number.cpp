class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        for(int i = x; i > 0; i = i / 10)
        {
            sum += (i % 10);
        }
        if(x % sum == 0)
        {
            return sum;
        }
        return -1;
    }
};
