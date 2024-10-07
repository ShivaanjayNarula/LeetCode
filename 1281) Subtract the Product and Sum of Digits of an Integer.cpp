class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n > 0)
        {
            int a = n % 10;
            n = n / 10;
            sum = sum + a;
            product = product * a;
        }
        int ans = product - sum;
        return ans;
    }
};
