class Solution {
public:
    int rotatedDigits(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(check(i))
            {
                ans++;
            }
        }
        return ans;
    }
    bool check(int n)
    {
        bool flag = false;
        while(n > 0)
        {
            int t = n % 10;
            if(t == 3 || t == 4 || t == 7)
            {
                return false;
            }
            if(t == 2 || t == 5 || t == 6 || t == 9)
            {
                flag = true;
            }
            n /= 10;
        }
        return flag;
    }
};
