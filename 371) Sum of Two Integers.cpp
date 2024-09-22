class Solution {
public:
    int getSum(int a, int b) {
        int i = max(a, b);
        int j = min(a, b);
        int x = j;
        while(x != 0)
        {
            x = i % j;
            int y = i/j;
            i = (-(~y)) * j;
            j = x;
        }
        return i;
    }
};
