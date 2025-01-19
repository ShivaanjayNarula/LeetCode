class Solution {
public:
    int lastRemaining(int n) {
        int ans = 1;
        int mul = 1;
        bool flag = true;
        while(n > 1)
        {
            if(flag || n % 2 == 1)
            {
                ans += mul;
            }
            mul *= 2;
            flag = !flag;
            n /= 2;
        }
        return ans;
    }
};
