class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 1;
        while(n > i && n != 0 && n != 1)
        {
            if(n%2 != 0)
            {
                return false;
            }
            n = n/2;
        }
        
        if(n <= 0)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        return true;
    }
};
