class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = 0;
        int sub = 0;
        for(int i = 0; i <= n; i++)
        {
            if(i % m != 0)
            {
                sum = sum + i;
            }
            else if(i % m == 0)
            {
                sub = sub + i;
            }
        }
        int ans;
        ans = sum - sub;
        return ans;
    }
};
