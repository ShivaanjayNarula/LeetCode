class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        while(n > 0)
        {
            if(n >= count)
            {
                n -= count;
                count++;
            }
            else
            {
                n -= count;
            }
        }
        return count - 1;
    }
};
