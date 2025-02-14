class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int left = 1;
        int right = m*n;
        int ans = 0;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            int countmid = count(m, n, mid);
            if(countmid < k)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
    int count(int m, int n, int mid)
    {
        int check = 0;
        for(int i = 1; i <= m; i++)
        {
            check += min(mid/i, n);
        }
        return check;
    }
};
