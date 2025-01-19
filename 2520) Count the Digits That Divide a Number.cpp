class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        for(int n = num; n > 0; n /= 10)
        {
            ans += num % (n % 10) == 0;
        }
        return ans;
    }
};
