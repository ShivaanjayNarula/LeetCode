class Solution {
public:
    int minimumSum(int n, int k) {
        int ans = 0;
        int check = max(n, k-1);
        for(int i = 1; i <= n; i++)
        {
            ans += i;
            if(k - i > i && k - i <= n)
            {
                check++;
                ans += check - k + i;
            }
        }
        return ans;
    }
};
