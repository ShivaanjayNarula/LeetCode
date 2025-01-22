class Solution {
public:
    int pivotInteger(int n) {
        int left = 1;
        int right = n;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += i+1;
        }
        while(left < right)
        {
            int mid = (left+right)/2;
            if(mid * mid - sum < 0)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        if(left * left - sum == 0)
        {
            return left;
        }
        return -1;
    }
};
