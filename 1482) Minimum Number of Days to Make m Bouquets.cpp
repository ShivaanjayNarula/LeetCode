class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = bloomDay.size();
        long long left = *min_element(bloomDay.begin(), bloomDay.end());
        long long right = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            int check = 0;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (bloomDay[i] <= mid)
                {
                    count++;
                }
                else
                {
                    count = 0;
                }
                if(count >= k)
                {
                    check++;
                    count = 0;
                }
            }
            if(check >= m)
            {
                ans = mid;
                right = mid - 1;
            }
            else if(check < m)
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
