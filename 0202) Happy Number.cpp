class Solution {
public:
    bool isHappy(int n) {
        int a = n;
        int b = n;
        do
        {
            a = check(a);
            b = check(check(b));
        }while(a != b);
        if(a == 1)
        {
            return true;
        }
        return false;
    }
    int check(int i)
    {
        int add = 0;
        while(i)
        {
            add += (i % 10) * (i % 10);
            i /= 10;
        }
        return add;
    }
};
