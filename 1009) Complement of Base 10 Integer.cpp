class Solution {
public:
    int bitwiseComplement(int n) {
        int a = 0;
        if(n == 0)
        {
            return 1;
        }
        while(a < n)
        {
            a = (a << 1) + 1;
        }
        return a ^ n;
    }
};
