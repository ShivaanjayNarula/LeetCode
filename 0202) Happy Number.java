class Solution {
    public boolean isHappy(int n) {
        int a = n;        
        int b = n;        
        do
        {
            a = check(a);
            b = check(check(b));
        }while(a != b);
        if(b == 1)
        {
            return true;
        }
        return false;
    }
    public int check(int i)
    {
        int add = 0;
        while(i != 0)
        {
            add += (i % 10) * (i % 10);
            i /= 10;
        }
        return add;
    }
}
