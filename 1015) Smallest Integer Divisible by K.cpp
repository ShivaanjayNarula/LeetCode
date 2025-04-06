class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0 || k % 5 == 0)
        {
            return -1;
        }
        int ans = 0;
        for(int i = 1; i <= k; i++)
        {
            ans = (ans * 10 + 1) % k;
            if(ans == 0)
            {
                return i;
            }
        }
        return -1;
    }
};
