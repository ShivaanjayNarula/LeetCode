class Solution {
public:
    bool isPowerOfThree(int n) {
        int i = 1;
        while(n>i)
        {
            if(n%3 != 0)
            {
                return false;
            }
            n=n/3;
        }
        if(n<=0)
        {
            return false;
        }
        return true;
    }
};
