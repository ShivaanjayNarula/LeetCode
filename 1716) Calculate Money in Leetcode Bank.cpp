class Solution {
public:
    int totalMoney(int n) {
        int a = n/7;
        int b = n%7;
        int start = 1;
        int end = 7;
        int ans = 0;
        for(int i = 1; i <= a; i++)
        {
            for(int j = start; j <= end; j++)
            {
                ans = ans + j;
            }
            start++;
            end++;
        }
        for(int i = 0; i < b; i++)
        {
            ans = ans + start;
            start++;
        }
        return ans;
    }
};
