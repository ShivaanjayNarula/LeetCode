class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int left = 1;
        int right = 1e5;
        while(left < right)
        {
            int mid = (left + right)/2;
            int sum = 0;
            for(int i : quantities)
            {
                sum += (i + mid - 1)/mid;
            }
            if(sum > n)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
};
