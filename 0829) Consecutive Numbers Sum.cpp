class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            int check = n - (i * ((i-1))/2);
            if(check <= 0)
            {
                break;
            }
            if(check % i == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
