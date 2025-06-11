class Solution {
public:
    int findComplement(int num) {
        int a = num;
        int b = 1;
        while(a != 0)
        {
            num = num ^ b;
            b = b << 1;
            a = a >> 1;
        }
        return num;
    }
};
